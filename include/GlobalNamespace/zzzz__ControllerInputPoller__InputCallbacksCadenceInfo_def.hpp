#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller__InputCallbacksCadenceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerInputPoller__InputCallbacksCadenceInfo)
namespace GlobalNamespace {
struct ControllerInputPoller__InputCallback;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ControllerInputPoller__InputCallbacksCadenceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "", "ControllerInputPoller/_InputCallbacksCadenceInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControllerInputPoller/_InputCallbacksCadenceInfo
struct CORDL_TYPE ControllerInputPoller__InputCallbacksCadenceInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x57e783c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputPoller__InputCallbacksCadenceInfo() ;

// Ctor Parameters [CppParam { name: "list", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ControllerInputPoller__InputCallback>*", modifiers: "", def_value: None, comment: None }]
constexpr ControllerInputPoller__InputCallbacksCadenceInfo(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerInputPoller__InputCallback>*  list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1659};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field list, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerInputPoller__InputCallback>*  list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, list) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
