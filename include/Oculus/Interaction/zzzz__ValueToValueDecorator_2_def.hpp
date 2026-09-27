#pragma once
// IWYU pragma private; include "Oculus/Interaction/ValueToValueDecorator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__DecoratorBase_2_def.hpp"
CORDL_MODULE_EXPORT(ValueToValueDecorator_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class ValueToValueDecorator_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::ValueToValueDecorator_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::ValueToValueDecorator_2, "Oculus.Interaction", "ValueToValueDecorator`2");
// Dependencies Oculus.Interaction.DecoratorBase`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.ValueToValueDecorator`2<InstanceT,DecorationT>
class CORDL_TYPE ValueToValueDecorator_2 : public ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT> {
public:
// Declarations
/// @brief Field _instanceToDecoration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceToDecoration, put=__cordl_internal_set__instanceToDecoration)) ::System::Collections::Generic::Dictionary_2<InstanceT,DecorationT>*  _instanceToDecoration;

/// @brief Method AddDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddDecoration(InstanceT  instance, DecorationT  decoration) ;

/// @brief Method GetDecorationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<DecorationT>* GetDecorationAsync(InstanceT  instance) ;

static inline ::Oculus::Interaction::ValueToValueDecorator_2<InstanceT,DecorationT>* New_ctor() ;

/// @brief Method RemoveDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveDecoration(InstanceT  instance) ;

/// @brief Method TryGetDecoration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetDecoration(InstanceT  instance, ::by_ref<DecorationT>  decoration) ;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,DecorationT>* const& __cordl_internal_get__instanceToDecoration() const;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,DecorationT>*& __cordl_internal_get__instanceToDecoration() ;

constexpr void __cordl_internal_set__instanceToDecoration(::System::Collections::Generic::Dictionary_2<InstanceT,DecorationT>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueToValueDecorator_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueToValueDecorator_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueToValueDecorator_2(ValueToValueDecorator_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueToValueDecorator_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueToValueDecorator_2(ValueToValueDecorator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16019};

/// @brief Field _instanceToDecoration, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<InstanceT,DecorationT>*  ____instanceToDecoration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
