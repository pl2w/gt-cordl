#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager_GetMembersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NexusManager_GetMembersRequest)
// Forward declare root types
namespace GlobalNamespace {
struct NexusManager_GetMembersRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NexusManager_GetMembersRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusManager_GetMembersRequest, "", "NexusManager/GetMembersRequest");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NexusManager/GetMembersRequest
struct CORDL_TYPE NexusManager_GetMembersRequest {
public:
// Declarations
 __declspec(property(get=get_page, put=set_page)) int32_t  page;

 __declspec(property(get=get_pageSize, put=set_pageSize)) int32_t  pageSize;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_page, addr 0x57773f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_page() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pageSize, addr 0x5777408, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pageSize() ;

/// [CompilerGenerated]
/// @brief Method set_page, addr 0x5777400, size 0x8, virtual false, abstract: false, final false
inline void set_page(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_pageSize, addr 0x5777410, size 0x8, virtual false, abstract: false, final false
inline void set_pageSize(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NexusManager_GetMembersRequest() ;

// Ctor Parameters [CppParam { name: "_page_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pageSize_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NexusManager_GetMembersRequest(int32_t  _page_k__BackingField, int32_t  _pageSize_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <page>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _page_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pageSize>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _pageSize_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusManager_GetMembersRequest, _page_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NexusManager_GetMembersRequest, _pageSize_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusManager_GetMembersRequest) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
