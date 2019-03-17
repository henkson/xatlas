static const uint8_t RayBundleIntegrate_fragment_gl[851] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x19, 0x75, // FSH............u
	0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x52, 0x65, // _rayBundleDataRe
	0x73, 0x6f, 0x6c, 0x75, 0x74, 0x69, 0x6f, 0x6e, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x20, 0x03, // solution...... .
	0x00, 0x00, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x73, 0x61, 0x6d, 0x70, 0x6c, // ..uniform usampl
	0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // er2D u_rayBundle
	0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x75, // HeaderSampler;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, // niform usampler2
	0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, // D u_rayBundleDat
	0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // aSampler;.unifor
	0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // m vec4 u_rayBund
	0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x52, 0x65, 0x73, 0x6f, 0x6c, 0x75, 0x74, 0x69, 0x6f, 0x6e, // leDataResolution
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // .  uvec4 tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 1;.  tmpvar_1 = 
	0x74, 0x65, 0x78, 0x65, 0x6c, 0x46, 0x65, 0x74, 0x63, 0x68, 0x20, 0x28, 0x75, 0x5f, 0x72, 0x61, // texelFetch (u_ra
	0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, // yBundleHeaderSam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x67, 0x6c, 0x5f, 0x46, // pler, ivec2(gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x79, 0x29, 0x2c, 0x20, 0x30, 0x29, // ragCoord.xy), 0)
	0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ;.  if ((tmpvar_
	0x31, 0x2e, 0x78, 0x20, 0x21, 0x3d, 0x20, 0x34, 0x32, 0x39, 0x34, 0x39, 0x36, 0x37, 0x32, 0x39, // 1.x != 429496729
	0x35, 0x75, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, // 5u)) {.    ivec2
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x75, //  tmpvar_2;.    u
	0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, // int tmpvar_3;.  
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, //   tmpvar_3 = uin
	0x74, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, // t(u_rayBundleDat
	0x61, 0x52, 0x65, 0x73, 0x6f, 0x6c, 0x75, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x29, 0x3b, 0x0a, // aResolution.x);.
	0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x3d, //     tmpvar_2.x =
	0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x6d, 0x6f, 0x64, 0x20, 0x28, //  int((uint(mod (
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x32, 0x75, // (tmpvar_1.x * 2u
	0x29, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x29, 0x29, 0x3b, // ), tmpvar_3))));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x20, // .    tmpvar_2.y 
	0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // = int(((tmpvar_1
	0x2e, 0x78, 0x20, 0x2a, 0x20, 0x32, 0x75, 0x29, 0x20, 0x2f, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // .x * 2u) / tmpva
	0x72, 0x5f, 0x33, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // r_3));.    vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, // tmpvar_4;.    tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, // pvar_4.w = 1.0;.
	0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, //     tmpvar_4.xyz
	0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, //  = uintBitsToFlo
	0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x65, 0x6c, 0x46, 0x65, 0x74, 0x63, 0x68, 0x20, 0x28, 0x75, // at(texelFetch (u
	0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x53, 0x61, // _rayBundleDataSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, // mpler, tmpvar_2,
	0x20, 0x30, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x67, 0x6c, //  0).xyz);.    gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _FragColor = tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, // var_4;.  } else 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // {.    vec4 tmpva
	0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // r_5;.    tmpvar_
	0x35, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, // 5.x = 0.0;.    t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, // mpvar_5.y = 0.0;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x7a, 0x20, // .    tmpvar_5.z 
	0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // = 0.0;.    tmpva
	0x72, 0x5f, 0x35, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, // r_5.w = 0.0;.   
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x7d, // tmpvar_5;.  };.}
	0x0a, 0x0a, 0x00,                                                                               // ...
};