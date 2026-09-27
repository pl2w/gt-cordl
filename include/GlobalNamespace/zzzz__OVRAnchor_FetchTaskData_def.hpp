#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchTaskData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_FetchTaskData)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_FetchTaskData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchTaskData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_FetchTaskData, "", "OVRAnchor/FetchTaskData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchTaskData
struct CORDL_TYPE OVRAnchor_FetchTaskData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_FetchTaskData() ;

// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IncrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_FetchTaskData(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  Anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  IncrementalResultsCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Anchors, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  Anchors;

/// @brief Field IncrementalResultsCallback, offset: 0x8, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  IncrementalResultsCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchTaskData, Anchors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchTaskData, IncrementalResultsCallback) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_FetchTaskData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
