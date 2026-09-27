#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCompositionProfile)
namespace Liv::Lck::Rendering {
class ILckCompositionLayer;
}
namespace Liv::Lck::Rendering {
class LckCompositionLayer;
}
namespace Liv::Lck::Rendering {
template<typename T>
class LckCompositionProfile___c__DisplayClass2_0_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckCompositionProfile;
}
namespace Liv::Lck::Rendering {
template<typename T>
class LckCompositionProfile___c__DisplayClass2_0_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckCompositionProfile*);
MARK_GEN_REF_T_PTR(::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckCompositionProfile*, "Liv.Lck.Rendering", "LckCompositionProfile");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1, "Liv.Lck.Rendering", "LckCompositionProfile/<>c__DisplayClass2_0`1");
// [CreateAssetMenu(fileName = "Lck Composition Profile", menuName = "LIV/LCK/Composition Profile")]
// Dependencies Liv.Lck.Rendering.LckCompositionLayer, UnityEngine.ScriptableObject
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionProfile
class CORDL_TYPE LckCompositionProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
template<typename T>
using __c__DisplayClass2_0_1 = ::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>;

/// @brief Field Layers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*  Layers;

/// @brief Method GetActiveLayers, addr 0x9d3f528, size 0x254, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* GetActiveLayers() ;

/// @brief Method GetLayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::Rendering::LckCompositionLayer*>)
inline T GetLayer(::StringW  name) ;

static inline ::Liv::Lck::Rendering::LckCompositionProfile* New_ctor() ;

/// @brief Method SetLayerActive, addr 0x9d3f474, size 0xb4, virtual false, abstract: false, final false
inline void SetLayerActive(::StringW  name, bool  isActive) ;

/// @brief Method SetOrientation, addr 0x9d3f1c0, size 0x2b4, virtual false, abstract: false, final false
inline void SetOrientation(bool  isHorizontal) ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>* const& __cordl_internal_get_Layers() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*& __cordl_internal_get_Layers() ;

constexpr void __cordl_internal_set_Layers(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*  value) ;

/// @brief Method .ctor, addr 0x9d3f77c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionProfile(LckCompositionProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionProfile(LckCompositionProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24856};

/// [SerializeReference]
/// [Tooltip("The list of layers to be composed. Order matters.")]
/// @brief Field Layers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*  ___Layers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckCompositionProfile, ___Layers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckCompositionProfile) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Rendering {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckCompositionProfile/<>c__DisplayClass2_0`1<T>
class CORDL_TYPE LckCompositionProfile___c__DisplayClass2_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>* New_ctor() ;

/// @brief Method <GetLayer>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetLayer_b__0(::Liv::Lck::Rendering::LckCompositionLayer*  layer) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCompositionProfile___c__DisplayClass2_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionProfile___c__DisplayClass2_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCompositionProfile___c__DisplayClass2_0_1(LckCompositionProfile___c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCompositionProfile___c__DisplayClass2_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCompositionProfile___c__DisplayClass2_0_1(LckCompositionProfile___c__DisplayClass2_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24855};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Rendering
