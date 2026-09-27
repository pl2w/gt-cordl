#pragma once
// IWYU pragma private; include "Oculus/Interaction/DecoratorBase_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DecoratorBase_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename InstanceT,typename DecorationT>
class DecoratorBase_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DecoratorBase_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DecoratorBase_2, "Oculus.Interaction", "DecoratorBase`2");
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename InstanceT,typename DecorationT>
// Is value type: false
// CS Name: Oculus.Interaction.DecoratorBase`2<InstanceT,DecorationT>
class CORDL_TYPE DecoratorBase_2 : public ::System::Object {
public:
// Declarations
/// @brief Field _instanceToCompletionSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceToCompletionSource, put=__cordl_internal_set__instanceToCompletionSource)) ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*  _instanceToCompletionSource;

/// @brief Method CompleteAsynchronousRequests, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteAsynchronousRequests(InstanceT  instance, DecorationT  decoration) ;

/// @brief Method GetAsynchronousRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<DecorationT>* GetAsynchronousRequest(InstanceT  instance) ;

static inline ::Oculus::Interaction::DecoratorBase_2<InstanceT,DecorationT>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>* const& __cordl_internal_get__instanceToCompletionSource() const;

constexpr ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*& __cordl_internal_get__instanceToCompletionSource() ;

constexpr void __cordl_internal_set__instanceToCompletionSource(::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoratorBase_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoratorBase_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoratorBase_2(DecoratorBase_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoratorBase_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoratorBase_2(DecoratorBase_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16016};

/// @brief Field _instanceToCompletionSource, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<InstanceT,::System::Threading::Tasks::TaskCompletionSource_1<DecorationT>*>*  ____instanceToCompletionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
