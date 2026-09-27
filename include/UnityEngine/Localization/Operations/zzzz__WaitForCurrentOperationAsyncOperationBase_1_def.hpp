#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/WaitForCurrentOperationAsyncOperationBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
CORDL_MODULE_EXPORT(WaitForCurrentOperationAsyncOperationBase_1)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class WaitForCurrentOperationAsyncOperationBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1, "UnityEngine.Localization.Operations", "WaitForCurrentOperationAsyncOperationBase`1");
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>
class CORDL_TYPE WaitForCurrentOperationAsyncOperationBase_1 : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
 __declspec(property(get=get_CurrentOperation, put=set_CurrentOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  CurrentOperation;

 __declspec(property(get=get_Dependency, put=set_Dependency)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  Dependency;

/// @brief Field <CurrentOperation>k__BackingField, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__CurrentOperation_k__BackingField, put=__cordl_internal_set__CurrentOperation_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _CurrentOperation_k__BackingField;

/// @brief Field <Dependency>k__BackingField, offset 0xb0, size 0x18 
 __declspec(property(get=__cordl_internal_get__Dependency_k__BackingField, put=__cordl_internal_set__Dependency_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _Dependency_k__BackingField;

/// @brief Field m_Waiting, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Waiting, put=__cordl_internal_set_m_Waiting)) bool  m_Waiting;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method InvokeWaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool InvokeWaitForCompletion() ;

static inline ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>* New_ctor() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get__CurrentOperation_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get__CurrentOperation_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get__Dependency_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get__Dependency_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_Waiting() const;

constexpr bool& __cordl_internal_get_m_Waiting() ;

constexpr void __cordl_internal_set__CurrentOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set__Dependency_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set_m_Waiting(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_CurrentOperation() ;

/// [CompilerGenerated]
/// @brief Method get_Dependency, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_Dependency() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// [CompilerGenerated]
/// @brief Method set_Dependency, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForCurrentOperationAsyncOperationBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForCurrentOperationAsyncOperationBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForCurrentOperationAsyncOperationBase_1(WaitForCurrentOperationAsyncOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForCurrentOperationAsyncOperationBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForCurrentOperationAsyncOperationBase_1(WaitForCurrentOperationAsyncOperationBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25312};

/// [CompilerGenerated]
/// @brief Field <CurrentOperation>k__BackingField, offset: 0x98, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ____CurrentOperation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Dependency>k__BackingField, offset: 0xb0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ____Dependency_k__BackingField;

/// @brief Field m_Waiting, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_Waiting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
