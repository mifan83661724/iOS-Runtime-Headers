/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DShaderEffects *mEffects;
    NSIndexSet *mEnabled;
    struct StateStack<TSCH3D::ObjectState, 6> { 
        unsigned int mIndex; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mCurrent; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mStack[6]; 
    } mObjectStateStack;
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    } mProjection;
    BOOL mProjectionChanged;
    TSCH3DShaderEffectsStates *mShaderEffectsStates;
    BOOL mTransformChanged;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { 
        unsigned int mIndex; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mCurrent; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mStack[8]; 
    } mTransformStack;
}

@property (nonatomic, readonly) BOOL projectionChanged;
@property (nonatomic, readonly) BOOL transformChanged;

+ (id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)currentTransform;
- (void)dealloc;
- (id)effects;
- (id)effectsStates;
- (id)initWithOriginal:(id)arg1;
- (id)initWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (BOOL)matrixEnabled;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (BOOL)objectStateEnabled;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned int x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_3_1; struct Lookup {} *x_2_3_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_4_1; } x_2_3_3; } x_1_2_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_4_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_2; } x_3_3_1[8]; } x_1_2_3; } x_2_1_1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_3_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_4_1; struct Lookup {} *x_2_4_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_5_1; } x_2_4_3; } x_1_3_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_5_1; void*x_1_5_2; } x_3_4_1[8]; } x_1_3_3; } x_2_2_1; void*x_2_2_2; } x_2_1_2[6]; void*x_2_1_3; void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; void*x_2_1_7; void*x_2_1_8; void*x_2_1_9; void*x_2_1_10; void*x_2_1_11; void*x_2_1_12; void*x_2_1_13; void*x_2_1_14; void*x_2_1_15; void*x_2_1_16; void*x_2_1_17; void*x_2_1_18; void*x_2_1_19; void*x_2_1_20; void*x_2_1_21; void*x_2_1_22; void*x_2_1_23; void*x_2_1_24; void*x_2_1_25; void*x_2_1_26; void*x_2_1_27; void*x_2_1_28; void*x_2_1_29; void*x_2_1_30; void*x_2_1_31; void*x_2_1_32; void*x_2_1_33; void*x_2_1_34; void*x_2_1_35; void*x_2_1_36; void*x_2_1_37; void*x_2_1_38; } x2; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; in void*x16; int x17; void*x18; out void*x19; in void*x20; void*x21; void*x22; struct x23; void*x24; void*x25; void*x26; float x27; void*x28; long x29; void*x30; out void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void x38; void*x39; void*x40; void*x41; BOOL x42; void*x43; void*x44; void*x45; out void*x46; const void*x47; void*x48; void*x49; void*x50; void*x51; unsigned short x52; void*x53; unsigned char x54; void*x55; void*x56; void*x57; void*x58; void*x59; long doublex60; void*x61; SEL x62; void*x63; SEL x64; void*x65; bycopy void*x66; unsigned int x67/* : ? */; void*x68; void*x69; void*x70; void*x71; void*x72; BOOL x73; void*x74; void*x75; void*x76; unsigned short x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; SEL x87; void*x88; SEL x89; void*x90; unsigned long x91; void*x92; out void*x93; out void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; short x105; void*x106; void*x107; void*x108; double x109; void*x110; SEL x111; void*x112; SEL x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; SEL x121; void*x122; SEL x123; void*x124; void*x125; void*x126; long x127; void*x128; long x129; void*x130; out void*x131; BOOL x132; void*x133; void*x134; void*x135; void*x136; void*x137; out void*x138; const void*x139; void*x140; void*x141; void*x142; void*x143; unsigned short x144; void*x145; unsigned char x146; void*x147; void*x148; void*x149; void*x150; void*x151; long doublex152; void*x153; SEL x154; void*x155; SEL x156; void*x157; bycopy void*x158; unsigned int x159/* : ? */; void*x160; void*x161; void*x162; void*x163; void*x164; BOOL x165; void*x166; void*x167; void*x168; unsigned short x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; SEL x179; void*x180; SEL x181; void*x182; unsigned long x183; void*x184; out void*x185; out void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; struct x201; void*x202; void*x203; void*x204; short x205; void*x206; void*x207; void*x208; const void*x209; void*x210; void*x211; BOOL x212; void*x213; void*x214; void*x215; void*x216; void*x217; unsigned long x218; void*x219; out void*x220; out void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; struct x230; void*x231; }*)objectStateStack;
- (void)popMatrix;
- (void)popState;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (BOOL)projectionChanged;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)projectionTransform;
- (void)pushMatrix;
- (void)pushState;
- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)resetBuffers;
- (void)resetTransformChangeFlags;
- (void)scale:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;
- (BOOL)shaderEnabled;
- (BOOL)transformChanged;
- (void)translate:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;

@end
