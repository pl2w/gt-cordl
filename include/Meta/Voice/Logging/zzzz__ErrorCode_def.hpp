#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
namespace Meta::Voice::Logging {
struct KnownErrorCode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
struct ErrorCode;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::ErrorCode);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::ErrorCode, "Meta.Voice.Logging", "ErrorCode");
// [IsReadOnly]
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.ErrorCode
struct CORDL_TYPE ErrorCode {
public:
// Declarations
 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Method Equals, addr 0x9e35fd4, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9e36054, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x9e35f34, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9e35f2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x9e35f24, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method op_Explicit, addr 0x9e35f40, size 0x1c, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::ErrorCode op_Explicit___Meta__Voice__Logging__ErrorCode(::StringW  value) ;

/// @brief Method op_Implicit, addr 0x9e35f5c, size 0x78, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::ErrorCode op_Implicit___Meta__Voice__Logging__ErrorCode(::Meta::Voice::Logging::KnownErrorCode  value) ;

/// @brief Method op_Implicit, addr 0x9e35f3c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Meta::Voice::Logging::ErrorCode  errorCode) ;

// Ctor Parameters []
// @brief default ctor
constexpr ErrorCode() ;

// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ErrorCode(::StringW  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::ErrorCode, _Value_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::ErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
