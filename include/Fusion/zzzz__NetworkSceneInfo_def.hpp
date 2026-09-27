#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfoDefaultFlags_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneInfo)
namespace Fusion {
template<typename T>
struct FixedArray_1;
}
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkLoadSceneParametersFlags;
}
namespace Fusion {
struct NetworkLoadSceneParameters;
}
namespace Fusion {
struct SceneRef;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Forward declare root types
namespace Fusion {
struct NetworkSceneInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSceneInfo);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneInfo, "Fusion", "NetworkSceneInfo");
// [NetworkStructWeaved(13)]
// Dependencies Fusion.NetworkLoadSceneParameters, Fusion.NetworkSceneInfoDefaultFlags, Fusion.SceneRef
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneInfo
struct CORDL_TYPE NetworkSceneInfo {
public:
// Declarations
 __declspec(property(get=get_SceneCount, put=set_SceneCount)) int32_t  SceneCount;

 __declspec(property(get=get_SceneParams)) ::Fusion::FixedArray_1<::Fusion::NetworkLoadSceneParameters>  SceneParams;

 __declspec(property(get=get_Scenes)) ::Fusion::FixedArray_1<::Fusion::SceneRef>  Scenes;

 __declspec(property(get=get_Version, put=set_Version)) int32_t  Version;

/// @brief Field _flags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::Fusion::NetworkSceneInfoDefaultFlags  _flags;

/// @brief Field _scene0, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene0, put=__cordl_internal_set__scene0)) ::Fusion::SceneRef  _scene0;

/// @brief Field _scene1, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene1, put=__cordl_internal_set__scene1)) ::Fusion::SceneRef  _scene1;

/// @brief Field _scene2, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene2, put=__cordl_internal_set__scene2)) ::Fusion::SceneRef  _scene2;

/// @brief Field _scene3, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene3, put=__cordl_internal_set__scene3)) ::Fusion::SceneRef  _scene3;

/// @brief Field _scene4, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene4, put=__cordl_internal_set__scene4)) ::Fusion::SceneRef  _scene4;

/// @brief Field _scene5, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene5, put=__cordl_internal_set__scene5)) ::Fusion::SceneRef  _scene5;

/// @brief Field _scene6, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene6, put=__cordl_internal_set__scene6)) ::Fusion::SceneRef  _scene6;

/// @brief Field _scene7, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__scene7, put=__cordl_internal_set__scene7)) ::Fusion::SceneRef  _scene7;

/// @brief Field _sceneMeta0, offset 0x24, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta0, put=__cordl_internal_set__sceneMeta0)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta0;

/// @brief Field _sceneMeta1, offset 0x26, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta1, put=__cordl_internal_set__sceneMeta1)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta1;

/// @brief Field _sceneMeta2, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta2, put=__cordl_internal_set__sceneMeta2)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta2;

/// @brief Field _sceneMeta3, offset 0x2a, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta3, put=__cordl_internal_set__sceneMeta3)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta3;

/// @brief Field _sceneMeta4, offset 0x2c, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta4, put=__cordl_internal_set__sceneMeta4)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta4;

/// @brief Field _sceneMeta5, offset 0x2e, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta5, put=__cordl_internal_set__sceneMeta5)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta5;

/// @brief Field _sceneMeta6, offset 0x30, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta6, put=__cordl_internal_set__sceneMeta6)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta6;

/// @brief Field _sceneMeta7, offset 0x32, size 0x2 
 __declspec(property(get=__cordl_internal_get__sceneMeta7, put=__cordl_internal_set__sceneMeta7)) ::Fusion::NetworkLoadSceneParameters  _sceneMeta7;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkSceneInfo>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkSceneInfo>*() ;

/// @brief Method AddSceneRef, addr 0x5fde924, size 0x178, virtual false, abstract: false, final false
inline int32_t AddSceneRef(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParametersFlags  flags) ;

/// @brief Method AddSceneRef, addr 0x5fde900, size 0x24, virtual false, abstract: false, final false
inline int32_t AddSceneRef(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode  localPhysicsMode, bool  activeOnLoad) ;

/// @brief Method Equals, addr 0x5fdeda0, size 0xcc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fded80, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkSceneInfo  other) ;

/// @brief Method GetHashCode, addr 0x5fdee6c, size 0x4c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IndexOf, addr 0x5fde8c8, size 0xc, virtual false, abstract: false, final false
inline int32_t IndexOf(/* [TupleElementNames(new[] { "SceneRef", "SceneParams" })] */ ::System::ValueTuple_2<::Fusion::SceneRef,::Fusion::NetworkLoadSceneParameters>  scene) ;

/// @brief Method IndexOf, addr 0x5fde7c4, size 0x104, virtual false, abstract: false, final false
inline int32_t IndexOf(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  sceneParams) ;

/// @brief Method RemoveSceneRef, addr 0x5fdea9c, size 0x1f4, virtual false, abstract: false, final false
inline bool RemoveSceneRef(::Fusion::SceneRef  sceneRef) ;

/// @brief Method ToString, addr 0x5fdec90, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::NetworkSceneInfoDefaultFlags const& __cordl_internal_get__flags() const;

constexpr ::Fusion::NetworkSceneInfoDefaultFlags& __cordl_internal_get__flags() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene0() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene0() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene1() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene1() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene2() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene2() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene3() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene3() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene4() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene4() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene5() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene5() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene6() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene6() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get__scene7() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get__scene7() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta0() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta0() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta1() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta1() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta2() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta2() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta3() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta3() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta4() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta4() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta5() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta5() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta6() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta6() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get__sceneMeta7() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get__sceneMeta7() ;

constexpr void __cordl_internal_set__flags(::Fusion::NetworkSceneInfoDefaultFlags  value) ;

constexpr void __cordl_internal_set__scene0(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene1(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene2(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene3(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene4(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene5(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene6(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__scene7(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set__sceneMeta0(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta1(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta2(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta3(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta4(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta5(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta6(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set__sceneMeta7(::Fusion::NetworkLoadSceneParameters  value) ;

/// @brief Method get_SceneCount, addr 0x5fde768, size 0xc, virtual false, abstract: false, final false
inline int32_t get_SceneCount() ;

/// @brief Method get_SceneParams, addr 0x5fde774, size 0x50, virtual false, abstract: false, final false
inline ::Fusion::FixedArray_1<::Fusion::NetworkLoadSceneParameters> get_SceneParams() ;

/// @brief Method get_Scenes, addr 0x5fde718, size 0x50, virtual false, abstract: false, final false
inline ::Fusion::FixedArray_1<::Fusion::SceneRef> get_Scenes() ;

/// @brief Method get_Version, addr 0x5fde8e4, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkSceneInfo>"
constexpr ::System::IEquatable_1<::Fusion::NetworkSceneInfo>* i___System__IEquatable_1___Fusion__NetworkSceneInfo_() ;

/// @brief Method op_Implicit, addr 0x5fdeeb8, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneInfo op_Implicit___Fusion__NetworkSceneInfo(::Fusion::SceneRef  sceneRef) ;

/// @brief Method set_SceneCount, addr 0x5fde8d4, size 0x10, virtual false, abstract: false, final false
inline void set_SceneCount(int32_t  value) ;

/// @brief Method set_Version, addr 0x5fde8f0, size 0x10, virtual false, abstract: false, final false
inline void set_Version(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneInfo() ;

// Ctor Parameters [CppParam { name: "_flags", ty: "::Fusion::NetworkSceneInfoDefaultFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene0", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene1", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene2", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene3", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene4", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene5", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene6", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scene7", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta0", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta1", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta2", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta3", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta4", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta5", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta6", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneMeta7", ty: "::Fusion::NetworkLoadSceneParameters", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneInfo(::Fusion::NetworkSceneInfoDefaultFlags  _flags, ::Fusion::SceneRef  _scene0, ::Fusion::SceneRef  _scene1, ::Fusion::SceneRef  _scene2, ::Fusion::SceneRef  _scene3, ::Fusion::SceneRef  _scene4, ::Fusion::SceneRef  _scene5, ::Fusion::SceneRef  _scene6, ::Fusion::SceneRef  _scene7, ::Fusion::NetworkLoadSceneParameters  _sceneMeta0, ::Fusion::NetworkLoadSceneParameters  _sceneMeta1, ::Fusion::NetworkLoadSceneParameters  _sceneMeta2, ::Fusion::NetworkLoadSceneParameters  _sceneMeta3, ::Fusion::NetworkLoadSceneParameters  _sceneMeta4, ::Fusion::NetworkLoadSceneParameters  _sceneMeta5, ::Fusion::NetworkLoadSceneParameters  _sceneMeta6, ::Fusion::NetworkLoadSceneParameters  _sceneMeta7) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____flags_padding[0x0];
/// @brief Field _flags, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkSceneInfoDefaultFlags  ____flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____flags_padding_forAlignment[0x0];
/// @brief Field _flags, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkSceneInfoDefaultFlags  ____flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____scene0_padding[0x4];
/// @brief Field _scene0, offset: 0x4, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____scene0_padding_forAlignment[0x4];
/// @brief Field _scene0, offset: 0x4, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____scene1_padding[0x8];
/// @brief Field _scene1, offset: 0x8, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____scene1_padding_forAlignment[0x8];
/// @brief Field _scene1, offset: 0x8, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____scene2_padding[0xc];
/// @brief Field _scene2, offset: 0xc, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____scene2_padding_forAlignment[0xc];
/// @brief Field _scene2, offset: 0xc, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____scene3_padding[0x10];
/// @brief Field _scene3, offset: 0x10, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____scene3_padding_forAlignment[0x10];
/// @brief Field _scene3, offset: 0x10, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____scene4_padding[0x14];
/// @brief Field _scene4, offset: 0x14, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____scene4_padding_forAlignment[0x14];
/// @brief Field _scene4, offset: 0x14, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ____scene5_padding[0x18];
/// @brief Field _scene5, offset: 0x18, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ____scene5_padding_forAlignment[0x18];
/// @brief Field _scene5, offset: 0x18, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ____scene6_padding[0x1c];
/// @brief Field _scene6, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ____scene6_padding_forAlignment[0x1c];
/// @brief Field _scene6, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ____scene7_padding[0x20];
/// @brief Field _scene7, offset: 0x20, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ____scene7_padding_forAlignment[0x20];
/// @brief Field _scene7, offset: 0x20, size: 0x4, def value: None
 ::Fusion::SceneRef  ____scene7_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ____sceneMeta0_padding[0x24];
/// @brief Field _sceneMeta0, offset: 0x24, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ____sceneMeta0_padding_forAlignment[0x24];
/// @brief Field _sceneMeta0, offset: 0x24, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x26
 uint8_t  ____sceneMeta1_padding[0x26];
/// @brief Field _sceneMeta1, offset: 0x26, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x26 for alignment
 uint8_t  ____sceneMeta1_padding_forAlignment[0x26];
/// @brief Field _sceneMeta1, offset: 0x26, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____sceneMeta2_padding[0x28];
/// @brief Field _sceneMeta2, offset: 0x28, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____sceneMeta2_padding_forAlignment[0x28];
/// @brief Field _sceneMeta2, offset: 0x28, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2a
 uint8_t  ____sceneMeta3_padding[0x2a];
/// @brief Field _sceneMeta3, offset: 0x2a, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2a for alignment
 uint8_t  ____sceneMeta3_padding_forAlignment[0x2a];
/// @brief Field _sceneMeta3, offset: 0x2a, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ____sceneMeta4_padding[0x2c];
/// @brief Field _sceneMeta4, offset: 0x2c, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ____sceneMeta4_padding_forAlignment[0x2c];
/// @brief Field _sceneMeta4, offset: 0x2c, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2e
 uint8_t  ____sceneMeta5_padding[0x2e];
/// @brief Field _sceneMeta5, offset: 0x2e, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2e for alignment
 uint8_t  ____sceneMeta5_padding_forAlignment[0x2e];
/// @brief Field _sceneMeta5, offset: 0x2e, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ____sceneMeta6_padding[0x30];
/// @brief Field _sceneMeta6, offset: 0x30, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ____sceneMeta6_padding_forAlignment[0x30];
/// @brief Field _sceneMeta6, offset: 0x30, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x32
 uint8_t  ____sceneMeta7_padding[0x32];
/// @brief Field _sceneMeta7, offset: 0x32, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x32 for alignment
 uint8_t  ____sceneMeta7_padding_forAlignment[0x32];
/// @brief Field _sceneMeta7, offset: 0x32, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ____sceneMeta7_forAlignment;
};
};
public:

/// @brief Field MaxScenes offset 0xffffffff size 0x4
static constexpr int32_t  MaxScenes{static_cast<int32_t>(0x8)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x34)};

/// @brief Field WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_COUNT{static_cast<int32_t>(0xd)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkSceneInfo) == 0x34, "Size mismatch!");

} // namespace end def Fusion
