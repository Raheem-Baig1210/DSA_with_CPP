import bpy

obj = bpy.context.active_object
mesh = obj.data

# Ensure mesh has UV map
if mesh.uv_layers.active is None:
    mesh.uv_layers.new(name="UVMap")

uv_layer = mesh.uv_layers.active.data

# Print UV coordinates
for loop in mesh.loops:
    uv = uv_layer[loop.index].uv
    print(f"Vertex {loop.vertex_index}: UV = {uv}")
