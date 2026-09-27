#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/OperationID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationID)
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::TelemetryUtilities {
struct OperationID;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::TelemetryUtilities::OperationID);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TelemetryUtilities::OperationID, "Meta.Voice.TelemetryUtilities", "OperationID");
// [IsReadOnly]
// Dependencies 
namespace Meta::Voice::TelemetryUtilities {
// Is value type: true
// CS Name: Meta.Voice.TelemetryUtilities.OperationID
struct CORDL_TYPE OperationID {
public:
// Declarations
 __declspec(property(get=get_IsAssigned)) bool  IsAssigned;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Method Equals, addr 0xb94e25c, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xb94e2dc, size 0x18, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb94e238, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb94e1e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method get_IsAssigned, addr 0xb94e228, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAssigned() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0xb94e1d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method op_Explicit, addr 0xb94e240, size 0x1c, virtual false, abstract: false, final false
static inline ::Meta::Voice::TelemetryUtilities::OperationID op_Explicit___Meta__Voice__TelemetryUtilities__OperationID(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OperationID() ;

// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr OperationID(::StringW  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::TelemetryUtilities::OperationID, _Value_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::TelemetryUtilities::OperationID) == 0x8, "Size mismatch!");

} // namespace end def Meta::Voice::TelemetryUtilities
