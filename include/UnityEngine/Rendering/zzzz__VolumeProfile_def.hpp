#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_DirtyState_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeProfile)
namespace GlobalNamespace {
struct VolumeProfile_DirtyState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeProfile___c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class VolumeProfile___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VolumeProfile*);
MARK_REF_T(::UnityEngine::Rendering::VolumeProfile___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeProfile*, "UnityEngine.Rendering", "VolumeProfile");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VolumeProfile___c*, "UnityEngine.Rendering", "VolumeProfile/<>c");
// Dependencies UnityEngine.Rendering.VolumeComponent, UnityEngine.Rendering.VolumeProfile::DirtyState, UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile
class CORDL_TYPE VolumeProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using DirtyState = ::GlobalNamespace::VolumeProfile_DirtyState;

using __c = ::UnityEngine::Rendering::VolumeProfile___c;

/// @brief Field components, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_components, put=__cordl_internal_set_components)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  components;

/// @brief Field dirtyState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_dirtyState, put=__cordl_internal_set_dirtyState)) ::GlobalNamespace::VolumeProfile_DirtyState  dirtyState;

/// @brief [Obsolete("This field was only public for editor access. #from(6000.0)")]
 __declspec(property(get=get_isDirty, put=set_isDirty)) bool  isDirty;

/// @brief Method Add, addr 0xb1a0258, size 0x18c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> Add(::System::Type*  type, bool  overrides) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline T Add(bool  overrides) ;

/// @brief Method GetComponentListHashCode, addr 0xb1a0890, size 0xb4, virtual false, abstract: false, final false
inline int32_t GetComponentListHashCode() ;

/// @brief Method GetHashCode, addr 0xb1a07e8, size 0xa8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Has, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool Has() ;

/// @brief Method Has, addr 0xb1a03e4, size 0x188, virtual false, abstract: false, final false
inline bool Has(::System::Type*  type) ;

/// @brief Method HasSubclassOf, addr 0xb1a0678, size 0x170, virtual false, abstract: false, final false
inline bool HasSubclassOf(::System::Type*  type) ;

static inline ::UnityEngine::Rendering::VolumeProfile* New_ctor() ;

/// @brief Method OnDisable, addr 0xb1a0164, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb1a0060, size 0x104, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline void Remove() ;

/// @brief Method Remove, addr 0xb1a056c, size 0x10c, virtual false, abstract: false, final false
inline void Remove(::System::Type*  type) ;

/// @brief Method Reset, addr 0xb1a0248, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Sanitize, addr 0xb1a0944, size 0xfc, virtual false, abstract: false, final false
inline void Sanitize() ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool TryGet(::by_ref<T>  component) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool TryGet(::System::Type*  type, ::by_ref<T>  component) ;

/// @brief Method TryGetAllSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool TryGetAllSubclassOf(::System::Type*  type, ::System::Collections::Generic::List_1<T>*  result) ;

/// @brief Method TryGetSubclassOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::VolumeComponent*>)
inline bool TryGetSubclassOf(::System::Type*  type, ::by_ref<T>  component) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& __cordl_internal_get_components() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components() ;

constexpr ::GlobalNamespace::VolumeProfile_DirtyState const& __cordl_internal_get_dirtyState() const;

constexpr ::GlobalNamespace::VolumeProfile_DirtyState& __cordl_internal_get_dirtyState() ;

constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  value) ;

constexpr void __cordl_internal_set_dirtyState(::GlobalNamespace::VolumeProfile_DirtyState  value) ;

/// @brief Method .ctor, addr 0xb1a0a40, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isDirty, addr 0xb1a0030, size 0x10, virtual false, abstract: false, final false
inline bool get_isDirty() ;

/// @brief Method set_isDirty, addr 0xb1a0040, size 0x20, virtual false, abstract: false, final false
inline void set_isDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeProfile(VolumeProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeProfile(VolumeProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17105};

/// @brief Field components, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  ___components;

/// @brief Field dirtyState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::VolumeProfile_DirtyState  ___dirtyState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___components) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeProfile, ___dirtyState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VolumeProfile) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeProfile/<>c
class CORDL_TYPE VolumeProfile___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::VolumeProfile___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  __9__6_0;

static inline ::UnityEngine::Rendering::VolumeProfile___c* New_ctor() ;

/// @brief Method <OnEnable>b__6_0, addr 0xb1a0b38, size 0x5c, virtual false, abstract: false, final false
inline bool _OnEnable_b__6_0(::UnityEngine::Rendering::VolumeComponent*  x) ;

/// @brief Method .ctor, addr 0xb1a0b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::VolumeProfile___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::VolumeProfile___c*  value) ;

static inline void setStaticF___9__6_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeProfile___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeProfile___c(VolumeProfile___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeProfile___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeProfile___c(VolumeProfile___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::VolumeProfile___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
