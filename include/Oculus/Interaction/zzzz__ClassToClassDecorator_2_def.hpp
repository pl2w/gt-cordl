#pragma once
// IWYU pragma private; include "Oculus/Interaction/ClassToClassDecorator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__DecoratorBase_2_def.hpp"
CORDL_MODULE_EXPORT(ClassToClassDecorator_2)
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ClassToClassDecorator_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ClassToClassDecorator_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ClassToClassDecorator_2, "Oculus.Interaction", "ClassToClassDecorator`2");
// Dependencies Oculus.Interaction.DecoratorBase`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ClassToClassDecorator`2<InstanceT,DecorationT>
class CORDL_TYPE ClassToClassDecorator_2 : public ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT> {
public:
// Declarations
/// @brief Field _instanceToDecoration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceToDecoration, put=__cordl_internal_set__instanceToDecoration)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*  _instanceToDecoration;

/// @brief Method AddDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddDecoration(InstanceT  instance, DecorationT  decoration) ;

/// @brief Method GetDecorationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<DecorationT>* GetDecorationAsync(InstanceT  instance) ;

static inline ::Oculus::Interaction::ClassToClassDecorator_2<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method RemoveDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveDecoration(InstanceT  instance) ;

/// @brief Method TryGetDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration) ;

constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>* const& __cordl_internal_get__instanceToDecoration() const;

constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*& __cordl_internal_get__instanceToDecoration() ;

constexpr void __cordl_internal_set__instanceToDecoration(::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassToClassDecorator_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassToClassDecorator_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassToClassDecorator_2(ClassToClassDecorator_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassToClassDecorator_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassToClassDecorator_2(ClassToClassDecorator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16020};

/// @brief Field _instanceToDecoration, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::ConditionalWeakTable_2<InstanceT,DecorationT>*  ____instanceToDecoration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
