#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Hmd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Hmd)
namespace Oculus::Interaction::Input {
class HmdDataAsset;
}
namespace Oculus::Interaction::Input {
class Hmd___c;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class Hmd;
}
namespace Oculus::Interaction::Input {
class Hmd___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Hmd*);
MARK_REF_T(::Oculus::Interaction::Input::Hmd___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Hmd*, "Oculus.Interaction.Input", "Hmd");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Hmd___c*, "Oculus.Interaction.Input", "Hmd/<>c");
// Dependencies Oculus.Interaction.Input.DataModifier`1<TData>
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Hmd
class CORDL_TYPE Hmd : public ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HmdDataAsset*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::Hmd___c;

/// @brief Field WhenUpdated, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUpdated, put=__cordl_internal_set_WhenUpdated)) ::System::Action*  WhenUpdated;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHmd"
constexpr operator  ::Oculus::Interaction::Input::IHmd*() noexcept;

/// @brief Method Apply, addr 0xa5132e4, size 0x4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HmdDataAsset*  data) ;

/// @brief Method MarkInputDataRequiresUpdate, addr 0xa5132e8, size 0x84, virtual true, abstract: false, final false
inline void MarkInputDataRequiresUpdate() ;

static inline ::Oculus::Interaction::Input::Hmd* New_ctor() ;

/// @brief Method TryGetRootPose, addr 0xa51336c, size 0x184, virtual true, abstract: false, final true
inline bool TryGetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUpdated() ;

constexpr void __cordl_internal_set_WhenUpdated(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa5134f0, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenUpdated, addr 0xa5131ac, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUpdated(::System::Action*  value) ;

/// @brief Convert to "::Oculus::Interaction::Input::IHmd"
constexpr ::Oculus::Interaction::Input::IHmd* i___Oculus__Interaction__Input__IHmd() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenUpdated, addr 0xa513248, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hmd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hmd", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hmd(Hmd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hmd", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hmd(Hmd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16506};

/// [CompilerGenerated]
/// @brief Field WhenUpdated, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___WhenUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Hmd, ___WhenUpdated) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Hmd) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Hmd/<>c
class CORDL_TYPE Hmd___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::Hmd___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Action*  __9__6_0;

static inline ::Oculus::Interaction::Input::Hmd___c* New_ctor() ;

/// @brief Method <.ctor>b__6_0, addr 0xa513690, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__6_0() ;

/// @brief Method .ctor, addr 0xa513688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::Hmd___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::Hmd___c*  value) ;

static inline void setStaticF___9__6_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hmd___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hmd___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hmd___c(Hmd___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hmd___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hmd___c(Hmd___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Hmd___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
