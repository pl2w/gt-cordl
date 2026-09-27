#pragma once
// IWYU pragma private; include "System/Xml/XsdCachingReader_CachingReaderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdCachingReader_CachingReaderState)
// Forward declare root types
namespace GlobalNamespace {
struct XsdCachingReader_CachingReaderState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdCachingReader_CachingReaderState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdCachingReader_CachingReaderState, "System.Xml", "XsdCachingReader/CachingReaderState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XsdCachingReader/CachingReaderState
struct CORDL_TYPE XsdCachingReader_CachingReaderState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdCachingReader_CachingReaderState_Unwrapped
enum struct __XsdCachingReader_CachingReaderState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Init = static_cast<int32_t>(0x1),
__E_Record = static_cast<int32_t>(0x2),
__E_Replay = static_cast<int32_t>(0x3),
__E_ReaderClosed = static_cast<int32_t>(0x4),
__E_Error = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdCachingReader_CachingReaderState_Unwrapped () const noexcept {
return static_cast<__XsdCachingReader_CachingReaderState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdCachingReader_CachingReaderState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdCachingReader_CachingReaderState(int32_t  value__) noexcept;

/// @brief Field Error value: I32(5)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const Error;

/// @brief Field Init value: I32(1)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const Init;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const None;

/// @brief Field ReaderClosed value: I32(4)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const ReaderClosed;

/// @brief Field Record value: I32(2)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const Record;

/// @brief Field Replay value: I32(3)
static ::GlobalNamespace::XsdCachingReader_CachingReaderState const Replay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdCachingReader_CachingReaderState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdCachingReader_CachingReaderState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
