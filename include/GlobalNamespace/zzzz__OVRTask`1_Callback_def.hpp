#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_Callback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTask`1_Callback)
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithInvoker;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithRemover;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_Callback;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1_Callback);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRTask_1_Callback, "", "OVRTask`1/Callback");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: OVRTask`1/Callback<TResult>
struct CORDL_TYPE OVRTask_1_Callback {
public:
// Declarations
/// @brief Field Callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Callbacks, put=setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*  Callbacks;

/// @brief Field Clearer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Clearer, put=setStaticF_Clearer)) ::System::Action*  Clearer;

/// @brief Field Invoker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invoker, put=setStaticF_Invoker)) ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*  Invoker;

/// @brief Field Remover, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Remover, put=setStaticF_Remover)) ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*  Remover;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Add(::System::Guid  taskId, ::System::Action_1<TResult>*  delegate) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(TResult  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Invoke(::System::Guid  taskId, TResult  result) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<TResult>*  delegate) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>* getStaticF_Callbacks() ;

static inline ::System::Action* getStaticF_Clearer() ;

static inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* getStaticF_Invoker() ;

static inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_Callback<TResult>>*  value) ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline void setStaticF_Invoker(::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*  value) ;

static inline void setStaticF_Remover(::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_Callback() ;

// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_1_Callback(::System::Action_1<TResult>*  _delegate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _delegate, offset: 0x0, size: 0x8, def value: None
 ::System::Action_1<TResult>*  _delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
