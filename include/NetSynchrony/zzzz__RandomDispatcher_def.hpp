#pragma once
// IWYU pragma private; include "NetSynchrony/RandomDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomDispatcher)
namespace NetSynchrony {
class RandomDispatcher_RandomDispatcherEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NetSynchrony {
class RandomDispatcher;
}
namespace NetSynchrony {
class RandomDispatcher_RandomDispatcherEvent;
}
// Write type traits
MARK_REF_T(::NetSynchrony::RandomDispatcher*);
MARK_REF_T(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*);
DEFINE_IL2CPP_CLASS(::NetSynchrony::RandomDispatcher*, "NetSynchrony", "RandomDispatcher");
DEFINE_IL2CPP_CLASS(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*, "NetSynchrony", "RandomDispatcher/RandomDispatcherEvent");
// [CreateAssetMenu(fileName = "RandomDispatcher", menuName = "NetSynchrony/RandomDispatcher", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace NetSynchrony {
// Is value type: false
// CS Name: NetSynchrony.RandomDispatcher
class CORDL_TYPE RandomDispatcher : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using RandomDispatcherEvent = ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent;

/// @brief Field Dispatch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Dispatch, put=__cordl_internal_set_Dispatch)) ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  Dispatch;

/// @brief Field dispatchTimes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispatchTimes, put=__cordl_internal_set_dispatchTimes)) ::System::Collections::Generic::List_1<float_t>*  dispatchTimes;

/// @brief Field index, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field maxWaitTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxWaitTime, put=__cordl_internal_set_maxWaitTime)) float_t  maxWaitTime;

/// @brief Field minWaitTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWaitTime, put=__cordl_internal_set_minWaitTime)) float_t  minWaitTime;

/// @brief Field totalMinutes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalMinutes, put=__cordl_internal_set_totalMinutes)) float_t  totalMinutes;

/// @brief Method Init, addr 0x5cb7248, size 0x2c8, virtual false, abstract: false, final false
inline void Init(double_t  seconds) ;

static inline ::NetSynchrony::RandomDispatcher* New_ctor() ;

/// @brief Method Sync, addr 0x5cb7510, size 0xc0, virtual false, abstract: false, final false
inline void Sync(double_t  seconds) ;

/// @brief Method Tick, addr 0x5cb75d0, size 0xf8, virtual false, abstract: false, final false
inline void Tick(double_t  seconds) ;

constexpr ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* const& __cordl_internal_get_Dispatch() const;

constexpr ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*& __cordl_internal_get_Dispatch() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_dispatchTimes() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_dispatchTimes() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr float_t const& __cordl_internal_get_maxWaitTime() const;

constexpr float_t& __cordl_internal_get_maxWaitTime() ;

constexpr float_t const& __cordl_internal_get_minWaitTime() const;

constexpr float_t& __cordl_internal_get_minWaitTime() ;

constexpr float_t const& __cordl_internal_get_totalMinutes() const;

constexpr float_t& __cordl_internal_get_totalMinutes() ;

constexpr void __cordl_internal_set_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value) ;

constexpr void __cordl_internal_set_dispatchTimes(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_maxWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_minWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_totalMinutes(float_t  value) ;

/// @brief Method .ctor, addr 0x5cb76c8, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_Dispatch, addr 0x5cb7110, size 0x9c, virtual false, abstract: false, final false
inline void add_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_Dispatch, addr 0x5cb71ac, size 0x9c, virtual false, abstract: false, final false
inline void remove_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomDispatcher(RandomDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomDispatcher(RandomDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4455};

/// [CompilerGenerated]
/// @brief Field Dispatch, offset: 0x18, size: 0x8, def value: None
 ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  ___Dispatch;

/// [SerializeField]
/// @brief Field minWaitTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___minWaitTime;

/// [SerializeField]
/// @brief Field maxWaitTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxWaitTime;

/// [SerializeField]
/// @brief Field totalMinutes, offset: 0x28, size: 0x4, def value: None
 float_t  ___totalMinutes;

/// @brief Field dispatchTimes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___dispatchTimes;

/// @brief Field index, offset: 0x38, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___Dispatch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___minWaitTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___maxWaitTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___totalMinutes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___dispatchTimes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NetSynchrony::RandomDispatcher, ___index) == 0x38, "Offset mismatch!");

static_assert(sizeof(::NetSynchrony::RandomDispatcher) == 0x40, "Size mismatch!");

} // namespace end def NetSynchrony
// Dependencies System.MulticastDelegate
namespace NetSynchrony {
// Is value type: false
// CS Name: NetSynchrony.RandomDispatcher/RandomDispatcherEvent
class CORDL_TYPE RandomDispatcher_RandomDispatcherEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5cb7808, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::NetSynchrony::RandomDispatcher*  randomDispatcher, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5cb7828, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5cb77f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::NetSynchrony::RandomDispatcher*  randomDispatcher) ;

static inline ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5cb76ec, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomDispatcher_RandomDispatcherEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcher_RandomDispatcherEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomDispatcher_RandomDispatcherEvent(RandomDispatcher_RandomDispatcherEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomDispatcher_RandomDispatcherEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomDispatcher_RandomDispatcherEvent(RandomDispatcher_RandomDispatcherEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent) == 0x80, "Size mismatch!");

} // namespace end def NetSynchrony
