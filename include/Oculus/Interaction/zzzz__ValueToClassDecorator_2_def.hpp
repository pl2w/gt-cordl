#pragma once
// IWYU pragma private; include "Oculus/Interaction/ValueToClassDecorator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__DecoratorBase_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueToClassDecorator_2)
namespace Oculus::Interaction {
class FinalAction;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ValueToClassDecorator_2___c__DisplayClass3_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class WeakReference_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ValueToClassDecorator_2;
}
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ValueToClassDecorator_2___c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ValueToClassDecorator_2);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ValueToClassDecorator_2, "Oculus.Interaction", "ValueToClassDecorator`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0, "Oculus.Interaction", "ValueToClassDecorator`2/<>c__DisplayClass3_0");
// Dependencies Oculus.Interaction.DecoratorBase`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ValueToClassDecorator`2<InstanceT,DecorationT>
class CORDL_TYPE ValueToClassDecorator_2 : public ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT> {
public:
// Declarations
using __c__DisplayClass3_0 = ::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT, DecorationT>;

/// @brief Field _cleanupActions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cleanupActions, put=__cordl_internal_set__cleanupActions)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*  _cleanupActions;

/// @brief Field _instanceToDecoration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceToDecoration, put=__cordl_internal_set__instanceToDecoration)) ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*  _instanceToDecoration;

/// @brief Method AddDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddDecoration(InstanceT  instance, DecorationT  decoration) ;

/// @brief Method GetDecorationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<DecorationT>* GetDecorationAsync(InstanceT  instance) ;

static inline ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method RemoveDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveDecoration(InstanceT  instance) ;

/// @brief Method TryGetDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration) ;

constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>* const& __cordl_internal_get__cleanupActions() const;

constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*& __cordl_internal_get__cleanupActions() ;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>* const& __cordl_internal_get__instanceToDecoration() const;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*& __cordl_internal_get__instanceToDecoration() ;

constexpr void __cordl_internal_set__cleanupActions(::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*  value) ;

constexpr void __cordl_internal_set__instanceToDecoration(::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueToClassDecorator_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueToClassDecorator_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueToClassDecorator_2(ValueToClassDecorator_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueToClassDecorator_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueToClassDecorator_2(ValueToClassDecorator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16018};

/// @brief Field _instanceToDecoration, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<InstanceT,::System::WeakReference_1<DecorationT>*>*  ____instanceToDecoration;

/// @brief Field _cleanupActions, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<DecorationT,::Oculus::Interaction::FinalAction*>*  ____cleanupActions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ValueToClassDecorator`2/<>c__DisplayClass3_0<InstanceT,DecorationT>
class CORDL_TYPE ValueToClassDecorator_2___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*  __4__this;

/// @brief Field instance, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) InstanceT  instance;

static inline ::Oculus::Interaction::ValueToClassDecorator_2___c__DisplayClass3_0<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method <AddDecoration>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AddDecoration_b__0() ;

constexpr ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>* const& __cordl_internal_get___4__this() const;

constexpr ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*& __cordl_internal_get___4__this() ;

constexpr InstanceT const& __cordl_internal_get_instance() const;

constexpr InstanceT& __cordl_internal_get_instance() ;

constexpr void __cordl_internal_set___4__this(::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*  value) ;

constexpr void __cordl_internal_set_instance(InstanceT  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueToClassDecorator_2___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueToClassDecorator_2___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueToClassDecorator_2___c__DisplayClass3_0(ValueToClassDecorator_2___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueToClassDecorator_2___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueToClassDecorator_2___c__DisplayClass3_0(ValueToClassDecorator_2___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16017};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::ValueToClassDecorator_2<InstanceT,DecorationT>*  _____4__this;

/// @brief Field instance, offset: 0x18, size: 0x8, def value: None
 InstanceT  ___instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
