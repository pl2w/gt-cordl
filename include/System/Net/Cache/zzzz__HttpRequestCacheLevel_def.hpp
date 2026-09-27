#pragma once
// IWYU pragma private; include "System/Net/Cache/HttpRequestCacheLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequestCacheLevel)
// Forward declare root types
namespace System::Net::Cache {
struct HttpRequestCacheLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Cache::HttpRequestCacheLevel);
DEFINE_IL2CPP_CLASS(::System::Net::Cache::HttpRequestCacheLevel, "System.Net.Cache", "HttpRequestCacheLevel");
// Dependencies 
namespace System::Net::Cache {
// Is value type: true
// CS Name: System.Net.Cache.HttpRequestCacheLevel
struct CORDL_TYPE HttpRequestCacheLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpRequestCacheLevel_Unwrapped
enum struct __HttpRequestCacheLevel_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_BypassCache = static_cast<int32_t>(0x1),
__E_CacheOnly = static_cast<int32_t>(0x2),
__E_CacheIfAvailable = static_cast<int32_t>(0x3),
__E_Revalidate = static_cast<int32_t>(0x4),
__E_Reload = static_cast<int32_t>(0x5),
__E_NoCacheNoStore = static_cast<int32_t>(0x6),
__E_CacheOrNextCacheOnly = static_cast<int32_t>(0x7),
__E_Refresh = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpRequestCacheLevel_Unwrapped () const noexcept {
return static_cast<__HttpRequestCacheLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpRequestCacheLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpRequestCacheLevel(int32_t  value__) noexcept;

/// @brief Field BypassCache value: I32(1)
static ::System::Net::Cache::HttpRequestCacheLevel const BypassCache;

/// @brief Field CacheIfAvailable value: I32(3)
static ::System::Net::Cache::HttpRequestCacheLevel const CacheIfAvailable;

/// @brief Field CacheOnly value: I32(2)
static ::System::Net::Cache::HttpRequestCacheLevel const CacheOnly;

/// @brief Field CacheOrNextCacheOnly value: I32(7)
static ::System::Net::Cache::HttpRequestCacheLevel const CacheOrNextCacheOnly;

/// @brief Field Default value: I32(0)
static ::System::Net::Cache::HttpRequestCacheLevel const Default;

/// @brief Field NoCacheNoStore value: I32(6)
static ::System::Net::Cache::HttpRequestCacheLevel const NoCacheNoStore;

/// @brief Field Refresh value: I32(8)
static ::System::Net::Cache::HttpRequestCacheLevel const Refresh;

/// @brief Field Reload value: I32(5)
static ::System::Net::Cache::HttpRequestCacheLevel const Reload;

/// @brief Field Revalidate value: I32(4)
static ::System::Net::Cache::HttpRequestCacheLevel const Revalidate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::HttpRequestCacheLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::Cache::HttpRequestCacheLevel) == 0x4, "Size mismatch!");

} // namespace end def System::Net::Cache
