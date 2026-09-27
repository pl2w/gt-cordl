#pragma once
// IWYU pragma private; include "Fusion/NetworkLoadSceneParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkLoadSceneParametersFlags_def.hpp"
#include "Fusion/zzzz__NetworkSceneLoadId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkLoadSceneParameters)
namespace Fusion {
struct NetworkLoadSceneParametersFlags;
}
namespace Fusion {
struct NetworkSceneLoadId;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Forward declare root types
namespace Fusion {
struct NetworkLoadSceneParameters;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkLoadSceneParameters);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkLoadSceneParameters, "Fusion", "NetworkLoadSceneParameters");
// [IsReadOnly]
// Dependencies Fusion.NetworkLoadSceneParametersFlags, Fusion.NetworkSceneLoadId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkLoadSceneParameters
#pragma pack(push, 0)
struct CORDL_TYPE NetworkLoadSceneParameters {
public:
// Declarations
 __declspec(property(get=get_IsActiveOnLoad)) bool  IsActiveOnLoad;

 __declspec(property(get=get_IsLocalPhysics2D)) bool  IsLocalPhysics2D;

 __declspec(property(get=get_IsLocalPhysics3D)) bool  IsLocalPhysics3D;

 __declspec(property(get=get_IsSingleLoad)) bool  IsSingleLoad;

/// @brief Field LoadId, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_LoadId, put=__cordl_internal_set_LoadId)) ::Fusion::NetworkSceneLoadId  LoadId;

 __declspec(property(get=get_LoadSceneMode)) ::UnityEngine::SceneManagement::LoadSceneMode  LoadSceneMode;

 __declspec(property(get=get_LoadSceneParameters)) ::UnityEngine::SceneManagement::LoadSceneParameters  LoadSceneParameters;

 __declspec(property(get=get_LocalPhysicsMode)) ::UnityEngine::SceneManagement::LocalPhysicsMode  LocalPhysicsMode;

/// @brief Field _flags, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::Fusion::NetworkLoadSceneParametersFlags  _flags;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkLoadSceneParameters>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkLoadSceneParameters>*() ;

/// @brief Method Equals, addr 0x5fde594, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fde56c, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkLoadSceneParameters  other) ;

/// @brief Method GetHashCode, addr 0x5fde618, size 0x24, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fde65c, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::NetworkSceneLoadId const& __cordl_internal_get_LoadId() const;

constexpr ::Fusion::NetworkSceneLoadId& __cordl_internal_get_LoadId() ;

constexpr ::Fusion::NetworkLoadSceneParametersFlags const& __cordl_internal_get__flags() const;

constexpr ::Fusion::NetworkLoadSceneParametersFlags& __cordl_internal_get__flags() ;

constexpr void __cordl_internal_set_LoadId(::Fusion::NetworkSceneLoadId  value) ;

constexpr void __cordl_internal_set__flags(::Fusion::NetworkLoadSceneParametersFlags  value) ;

/// @brief Method .ctor, addr 0x5fde4e8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkSceneLoadId  loadId, ::Fusion::NetworkLoadSceneParametersFlags  flags) ;

/// @brief Method get_IsActiveOnLoad, addr 0x5fde53c, size 0xc, virtual false, abstract: false, final false
inline bool get_IsActiveOnLoad() ;

/// @brief Method get_IsLocalPhysics2D, addr 0x5fde554, size 0xc, virtual false, abstract: false, final false
inline bool get_IsLocalPhysics2D() ;

/// @brief Method get_IsLocalPhysics3D, addr 0x5fde560, size 0xc, virtual false, abstract: false, final false
inline bool get_IsLocalPhysics3D() ;

/// @brief Method get_IsSingleLoad, addr 0x5fde548, size 0xc, virtual false, abstract: false, final false
inline bool get_IsSingleLoad() ;

/// @brief Method get_LoadSceneMode, addr 0x5fde4f4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::LoadSceneMode get_LoadSceneMode() ;

/// @brief Method get_LoadSceneParameters, addr 0x5fde510, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::LoadSceneParameters get_LoadSceneParameters() ;

/// @brief Method get_LocalPhysicsMode, addr 0x5fde504, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::LocalPhysicsMode get_LocalPhysicsMode() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkLoadSceneParameters>"
constexpr ::System::IEquatable_1<::Fusion::NetworkLoadSceneParameters>* i___System__IEquatable_1___Fusion__NetworkLoadSceneParameters_() ;

/// @brief Method op_Equality, addr 0x5fde63c, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkLoadSceneParameters  left, ::Fusion::NetworkLoadSceneParameters  right) ;

/// @brief Method op_Inequality, addr 0x5fde64c, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkLoadSceneParameters  left, ::Fusion::NetworkLoadSceneParameters  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoadSceneParameters() ;

// Ctor Parameters [CppParam { name: "LoadId", ty: "::Fusion::NetworkSceneLoadId", modifiers: "", def_value: None, comment: None }, CppParam { name: "_flags", ty: "::Fusion::NetworkLoadSceneParametersFlags", modifiers: "", def_value: None, comment: None }]
constexpr NetworkLoadSceneParameters(::Fusion::NetworkSceneLoadId  LoadId, ::Fusion::NetworkLoadSceneParametersFlags  _flags) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___LoadId_padding[0x0];
/// @brief Field LoadId, offset: 0x0, size: 0x1, def value: None
 ::Fusion::NetworkSceneLoadId  ___LoadId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___LoadId_padding_forAlignment[0x0];
/// @brief Field LoadId, offset: 0x0, size: 0x1, def value: None
 ::Fusion::NetworkSceneLoadId  ___LoadId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ____flags_padding[0x1];
/// @brief Field _flags, offset: 0x1, size: 0x1, def value: None
 ::Fusion::NetworkLoadSceneParametersFlags  ____flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ____flags_padding_forAlignment[0x1];
/// @brief Field _flags, offset: 0x1, size: 0x1, def value: None
 ::Fusion::NetworkLoadSceneParametersFlags  ____flags_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkLoadSceneParameters) == 0x2, "Size mismatch!");

} // namespace end def Fusion
