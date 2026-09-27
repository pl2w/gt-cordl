#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentUtils)
namespace UnityEngine {
class Behaviour;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace GlobalNamespace {
class ComponentUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ComponentUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ComponentUtils*, "", "ComponentUtils");
// [Extension]
// Dependencies System.Object, UnityEngine.Component, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ComponentUtils
class CORDL_TYPE ComponentUtils : public ::System::Object {
public:
// Declarations
/// @brief Field kHashBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kHashBits, put=setStaticF_kHashBits)) ::ArrayW<uint32_t>  kHashBits;

/// [Extension]
/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T AddComponent(::UnityEngine::Component*  c) ;

/// @brief Method ComputeStaticHash128, addr 0x5b020b0, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 ComputeStaticHash128(::UnityEngine::Component*  c, ::StringW  k) ;

/// @brief Method ComputeStaticHash128, addr 0x5b021d8, size 0x514, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 ComputeStaticHash128(::UnityEngine::Component*  c, int32_t  k) ;

/// [Extension]
/// @brief Method DisableIfNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline bool DisableIfNull(::UnityEngine::Behaviour*  c, T  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, /* [CallerMemberName] */ ::StringW  caller) ;

/// [Extension]
/// @brief Method EnsureComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T EnsureComponent(::UnityEngine::Component*  ctx, ::by_ref<T>  target) ;

/// [Extension]
/// @brief Method GetComponentAndSetFieldIfNullElseLog, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool GetComponentAndSetFieldIfNullElseLog(::UnityEngine::Behaviour*  c, ::by_ref<T>  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, ::StringW  msgSuffix, /* [CallerMemberName] */ ::StringW  caller) ;

/// [Extension]
/// @brief Method GetComponentAndSetFieldIfNullElseLogAndDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool GetComponentAndSetFieldIfNullElseLogAndDisable(::UnityEngine::Behaviour*  c, ::by_ref<T>  fieldRef, ::StringW  fieldName, ::StringW  fieldTypeName, ::StringW  msgSuffix, /* [CallerMemberName] */ ::StringW  caller) ;

/// [Extension]
/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetOrAddComponent(::UnityEngine::Component*  c, ::by_ref<T>  result) ;

/// [Extension]
/// @brief Method TryEnsureComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool TryEnsureComponent(::UnityEngine::Component*  ctx, ::by_ref<T>  target) ;

static inline ::ArrayW<uint32_t> getStaticF_kHashBits() ;

static inline void setStaticF_kHashBits(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentUtils(ComponentUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentUtils(ComponentUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ComponentUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
