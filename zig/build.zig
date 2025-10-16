const std = @import("std");
const Build = @import("std").Build;
const builtin = @import("builtin");

pub fn build(b: *Build) void {
    //const target = b.standardTargetOptions(.{});
    //const optimize = b.standardOptimizeOption(.{});

    const mytarget: std.Target.Query = .{
        .cpu_arch = .thumb,
        .cpu_model = .{ .explicit = &std.Target.arm.cpu.cortex_m55 },
        .os_tag = .freestanding,
        .abi = .eabihf,
        .cpu_features_add = std.Target.arm.featureSet(&.{
            .fp_armv8d16sp,
            .mve,
            .mve_fp,
        }),
    };

    const testlib = b.addLibrary(.{ .name = "testlib", .linkage = .static, .root_module = b.createModule(.{
        .root_source_file = b.path("test.zig"),
        .target = b.resolveTargetQuery(mytarget),
        .optimize = .ReleaseFast,
    }) });

    b.default_step.dependOn(&testlib.step);
    b.installArtifact(testlib);
}
