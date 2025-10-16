const lanes = 4;
const Vec = @Vector(lanes, f32);

export fn myadd(a: [*]align(4) const f32, b: [*]align(4) const f32, dst: [*]align(4) f32, nb: u32) void {
    const n: usize = @intCast(nb);
    for (0..n) |i| {
        dst[i] = a[i] + b[i];
    }
}
