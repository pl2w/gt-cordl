#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_Builder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTask_Builder)
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TValue,typename TStatus>
struct OVRResult_2;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTask_Builder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTask_Builder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTask_Builder, "", "OVRTask/Builder");
// [IsReadOnly]
// Dependencies OVRPlugin::Result, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTask/Builder
struct CORDL_TYPE OVRTask_Builder {
public:
// Declarations
/// @brief Method CastResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
requires(::cordl_internals::value_type_constraint<TResult> && ::cordl_internals::default_constructor_constraint<TResult>)
inline TResult CastResult() ;

/// @brief Method ToResultTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>> ToResultTask() ;

/// @brief Method ToTask, addr 0xa658bb4, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> ToTask() ;

/// @brief Method ToTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>> ToTask() ;

/// @brief Method ToTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1<TResult> ToTask(TResult  failureValue) ;

/// @brief Method ToTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<TStatus> ToTask() ;

/// @brief Method .ctor, addr 0xa658990, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRPlugin_Result  synchronousResult, ::System::Guid  taskId) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_Builder() ;

// Ctor Parameters [CppParam { name: "_synchronousResult", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None, comment: None }, CppParam { name: "_taskId", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_Builder(::GlobalNamespace::OVRPlugin_Result  _synchronousResult, ::System::Guid  _taskId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field _synchronousResult, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Result  _synchronousResult;

/// @brief Field _taskId, offset: 0x4, size: 0x10, def value: None
 ::System::Guid  _taskId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTask_Builder, _synchronousResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTask_Builder, _taskId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTask_Builder) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
