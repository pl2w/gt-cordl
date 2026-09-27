#pragma once
// IWYU pragma private; include "Oculus/Interaction/VirtualPointable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualPointable)
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace Oculus::Interaction {
class VirtualPointable___c;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction {
class VirtualPointable;
}
namespace Oculus::Interaction {
class VirtualPointable___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::VirtualPointable*);
MARK_REF_T(::Oculus::Interaction::VirtualPointable___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VirtualPointable*, "Oculus.Interaction", "VirtualPointable");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VirtualPointable___c*, "Oculus.Interaction", "VirtualPointable/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VirtualPointable
class CORDL_TYPE VirtualPointable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::VirtualPointable___c;

/// @brief Field WhenPointerEventRaised, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPointerEventRaised, put=__cordl_internal_set_WhenPointerEventRaised)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  WhenPointerEventRaised;

/// @brief Field _currentlyGrabbing, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentlyGrabbing, put=__cordl_internal_set__currentlyGrabbing)) bool  _currentlyGrabbing;

/// @brief Field _grabFlag, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__grabFlag, put=__cordl_internal_set__grabFlag)) bool  _grabFlag;

/// @brief Field _id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::Oculus::Interaction::UniqueIdentifier*  _id;

/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Method Awake, addr 0xa46d3c0, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::VirtualPointable* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa46d788, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetGrabFlag, addr 0xa46d780, size 0x8, virtual false, abstract: false, final false
inline void SetGrabFlag(bool  grabFlag) ;

/// @brief Method Update, addr 0xa46d4a4, size 0x2dc, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get_WhenPointerEventRaised() const;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get_WhenPointerEventRaised() ;

constexpr bool const& __cordl_internal_get__currentlyGrabbing() const;

constexpr bool& __cordl_internal_get__currentlyGrabbing() ;

constexpr bool const& __cordl_internal_get__grabFlag() const;

constexpr bool& __cordl_internal_get__grabFlag() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__id() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__id() ;

constexpr void __cordl_internal_set_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__currentlyGrabbing(bool  value) ;

constexpr void __cordl_internal_set__grabFlag(bool  value) ;

constexpr void __cordl_internal_set__id(::Oculus::Interaction::UniqueIdentifier*  value) ;

/// @brief Method .ctor, addr 0xa46d7e4, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPointerEventRaised, addr 0xa46d260, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenPointerEventRaised, addr 0xa46d310, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualPointable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualPointable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualPointable(VirtualPointable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualPointable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualPointable(VirtualPointable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15914};

/// [SerializeField]
/// @brief Field _grabFlag, offset: 0x20, size: 0x1, def value: None
 bool  ____grabFlag;

/// [CompilerGenerated]
/// @brief Field WhenPointerEventRaised, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::PointerEvent>*  ___WhenPointerEventRaised;

/// @brief Field _id, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____id;

/// @brief Field _currentlyGrabbing, offset: 0x38, size: 0x1, def value: None
 bool  ____currentlyGrabbing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::VirtualPointable, ____grabFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualPointable, ___WhenPointerEventRaised) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualPointable, ____id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualPointable, ____currentlyGrabbing) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::VirtualPointable) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VirtualPointable/<>c
class CORDL_TYPE VirtualPointable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::VirtualPointable___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  __9__10_0;

static inline ::Oculus::Interaction::VirtualPointable___c* New_ctor() ;

/// @brief Method <.ctor>b__10_0, addr 0xa46d94c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__10_0(::Oculus::Interaction::PointerEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa46d944, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::VirtualPointable___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::PointerEvent>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::Oculus::Interaction::VirtualPointable___c*  value) ;

static inline void setStaticF___9__10_0(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualPointable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualPointable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualPointable___c(VirtualPointable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualPointable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualPointable___c(VirtualPointable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::VirtualPointable___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
