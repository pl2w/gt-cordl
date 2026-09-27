#pragma once
// IWYU pragma private; include "Oculus/Interaction/HoverInteractorsGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HoverInteractorsGate)
namespace Oculus::Interaction {
class HoverInteractorsGate___c;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HoverInteractorsGate;
}
namespace Oculus::Interaction {
class HoverInteractorsGate___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HoverInteractorsGate*);
MARK_REF_T(::Oculus::Interaction::HoverInteractorsGate___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HoverInteractorsGate*, "Oculus.Interaction", "HoverInteractorsGate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HoverInteractorsGate___c*, "Oculus.Interaction", "HoverInteractorsGate/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HoverInteractorsGate
class CORDL_TYPE HoverInteractorsGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::HoverInteractorsGate___c;

/// @brief Field InteractorsA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractorsA, put=__cordl_internal_set_InteractorsA)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  InteractorsA;

/// @brief Field InteractorsB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractorsB, put=__cordl_internal_set_InteractorsB)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  InteractorsB;

/// @brief Field _hoveringInteractorsACount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoveringInteractorsACount, put=__cordl_internal_set__hoveringInteractorsACount)) int32_t  _hoveringInteractorsACount;

/// @brief Field _hoveringInteractorsBCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoveringInteractorsBCount, put=__cordl_internal_set__hoveringInteractorsBCount)) int32_t  _hoveringInteractorsBCount;

/// @brief Field _interactorsA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorsA, put=__cordl_internal_set__interactorsA)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactorsA;

/// @brief Field _interactorsB, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorsB, put=__cordl_internal_set__interactorsB)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactorsB;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4138c4, size 0x334, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableAll, addr 0xa414328, size 0x178, virtual false, abstract: false, final false
inline void EnableAll(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors, bool  enable) ;

/// @brief Method HandleInteractorAStateChanged, addr 0xa4142bc, size 0xc, virtual false, abstract: false, final false
inline void HandleInteractorAStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method HandleInteractorBStateChanged, addr 0xa41431c, size 0xc, virtual false, abstract: false, final false
inline void HandleInteractorBStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method InjectAllHoverInteractorsGate, addr 0xa4144a0, size 0x28, virtual false, abstract: false, final false
inline void InjectAllHoverInteractorsGate(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactorsA, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactorsB) ;

/// @brief Method InjectInteractorsA, addr 0xa4144c8, size 0x124, virtual false, abstract: false, final false
inline void InjectInteractorsA(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

/// @brief Method InjectInteractorsB, addr 0xa4145ec, size 0x124, virtual false, abstract: false, final false
inline void InjectInteractorsB(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

static inline ::Oculus::Interaction::HoverInteractorsGate* New_ctor() ;

/// @brief Method OnDisable, addr 0xa413f6c, size 0x350, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa413c1c, size 0x350, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessInteractorsStateChange, addr 0xa4142c8, size 0x54, virtual false, abstract: false, final false
inline void ProcessInteractorsStateChange(::Oculus::Interaction::InteractorStateChangeArgs  stateChange, ::by_ref<int32_t>  hoveringCounter, ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  oppositeInteractors) ;

/// @brief Method Start, addr 0xa413bf8, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>* const& __cordl_internal_get_InteractorsA() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*& __cordl_internal_get_InteractorsA() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>* const& __cordl_internal_get_InteractorsB() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*& __cordl_internal_get_InteractorsB() ;

constexpr int32_t const& __cordl_internal_get__hoveringInteractorsACount() const;

constexpr int32_t& __cordl_internal_get__hoveringInteractorsACount() ;

constexpr int32_t const& __cordl_internal_get__hoveringInteractorsBCount() const;

constexpr int32_t& __cordl_internal_get__hoveringInteractorsBCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactorsA() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactorsA() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactorsB() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactorsB() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_InteractorsA(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  value) ;

constexpr void __cordl_internal_set_InteractorsB(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  value) ;

constexpr void __cordl_internal_set__hoveringInteractorsACount(int32_t  value) ;

constexpr void __cordl_internal_set__hoveringInteractorsBCount(int32_t  value) ;

constexpr void __cordl_internal_set__interactorsA(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__interactorsB(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa414710, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverInteractorsGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverInteractorsGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverInteractorsGate(HoverInteractorsGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverInteractorsGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverInteractorsGate(HoverInteractorsGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15758};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactorsA, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactorsA;

/// @brief Field InteractorsA, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  ___InteractorsA;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactorsB, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactorsB;

/// @brief Field InteractorsB, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  ___InteractorsB;

/// @brief Field _hoveringInteractorsACount, offset: 0x40, size: 0x4, def value: None
 int32_t  ____hoveringInteractorsACount;

/// @brief Field _hoveringInteractorsBCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ____hoveringInteractorsBCount;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ____interactorsA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ___InteractorsA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ____interactorsB) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ___InteractorsB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ____hoveringInteractorsACount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ____hoveringInteractorsBCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HoverInteractorsGate, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HoverInteractorsGate) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HoverInteractorsGate/<>c
class CORDL_TYPE HoverInteractorsGate___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::HoverInteractorsGate___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  __9__16_0;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  __9__17_0;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  __9__7_1;

/// @brief Field <>9__7_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_2, put=setStaticF___9__7_2)) ::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  __9__7_2;

/// @brief Field <>9__7_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_3, put=setStaticF___9__7_3)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  __9__7_3;

static inline ::Oculus::Interaction::HoverInteractorsGate___c* New_ctor() ;

/// @brief Method <Awake>b__7_0, addr 0xa414788, size 0x5c, virtual false, abstract: false, final false
inline bool _Awake_b__7_0(::UnityEngine::Object*  i) ;

/// @brief Method <Awake>b__7_1, addr 0xa4147e4, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* _Awake_b__7_1(::UnityEngine::Object*  i) ;

/// @brief Method <Awake>b__7_2, addr 0xa41482c, size 0x5c, virtual false, abstract: false, final false
inline bool _Awake_b__7_2(::UnityEngine::Object*  i) ;

/// @brief Method <Awake>b__7_3, addr 0xa414888, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* _Awake_b__7_3(::UnityEngine::Object*  i) ;

/// @brief Method <InjectInteractorsA>b__16_0, addr 0xa4148d0, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectInteractorsA_b__16_0(::Oculus::Interaction::IInteractor*  i) ;

/// @brief Method <InjectInteractorsB>b__17_0, addr 0xa414948, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectInteractorsB_b__17_0(::Oculus::Interaction::IInteractor*  i) ;

/// @brief Method .ctor, addr 0xa414780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::HoverInteractorsGate___c* getStaticF___9() ;

static inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* getStaticF___9__16_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* getStaticF___9__17_0() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* getStaticF___9__7_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* getStaticF___9__7_1() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* getStaticF___9__7_2() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* getStaticF___9__7_3() ;

static inline void setStaticF___9(::Oculus::Interaction::HoverInteractorsGate___c*  value) ;

static inline void setStaticF___9__16_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__17_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__7_0(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__7_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value) ;

static inline void setStaticF___9__7_2(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__7_3(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverInteractorsGate___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverInteractorsGate___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverInteractorsGate___c(HoverInteractorsGate___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverInteractorsGate___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverInteractorsGate___c(HoverInteractorsGate___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HoverInteractorsGate___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
