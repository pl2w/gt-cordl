#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/JointCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JointCollection)
namespace Oculus::Interaction::HandGrab::Visuals {
class HandJointMap;
}
namespace Oculus::Interaction::HandGrab::Visuals {
class JointCollection___c__DisplayClass2_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Visuals {
class JointCollection;
}
namespace Oculus::Interaction::HandGrab::Visuals {
class JointCollection___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::JointCollection*);
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::JointCollection*, "Oculus.Interaction.HandGrab.Visuals", "JointCollection");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0*, "Oculus.Interaction.HandGrab.Visuals", "JointCollection/<>c__DisplayClass2_0");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.JointCollection
class CORDL_TYPE JointCollection : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0;

 __declspec(property(get=get_Item)) ::Oculus::Interaction::HandGrab::Visuals::HandJointMap*  Item[];

/// @brief Field _jointIndices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointIndices, put=__cordl_internal_set__jointIndices)) ::ArrayW<int32_t>  _jointIndices;

/// @brief Field _jointMaps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointMaps, put=__cordl_internal_set__jointMaps)) ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  _jointMaps;

static inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection* New_ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  joints) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__jointIndices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__jointIndices() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>* const& __cordl_internal_get__jointMaps() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*& __cordl_internal_get__jointMaps() ;

constexpr void __cordl_internal_set__jointIndices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__jointMaps(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  value) ;

/// @brief Method .ctor, addr 0xa4e5c10, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  joints) ;

/// @brief Method get_Item, addr 0xa4e5e14, size 0x88, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::Visuals::HandJointMap* get_Item(int32_t  jointIndex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointCollection(JointCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointCollection(JointCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16346};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _jointIndices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____jointIndices;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _jointMaps, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::Visuals::HandJointMap*>*  ____jointMaps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::JointCollection, ____jointIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::JointCollection, ____jointMaps) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::JointCollection) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0
class CORDL_TYPE JointCollection___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field boneId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_boneId, put=__cordl_internal_set_boneId)) ::Oculus::Interaction::Input::HandJointId  boneId;

static inline ::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get_boneId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get_boneId() ;

constexpr void __cordl_internal_set_boneId(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method <.ctor>b__0, addr 0xa4e5e9c, size 0x20, virtual false, abstract: false, final false
inline bool __ctor_b__0(::Oculus::Interaction::HandGrab::Visuals::HandJointMap*  bone) ;

/// @brief Method .ctor, addr 0xa4e5e0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointCollection___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointCollection___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointCollection___c__DisplayClass2_0(JointCollection___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointCollection___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointCollection___c__DisplayClass2_0(JointCollection___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16345};

/// @brief Field boneId, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ___boneId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0, ___boneId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::JointCollection___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
