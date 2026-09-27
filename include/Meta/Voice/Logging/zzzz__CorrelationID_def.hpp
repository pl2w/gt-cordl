#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/CorrelationID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CorrelationID)
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
struct CorrelationID;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::CorrelationID);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::CorrelationID, "Meta.Voice.Logging", "CorrelationID");
// [IsReadOnly]
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.CorrelationID
struct CORDL_TYPE CorrelationID {
public:
// Declarations
 __declspec(property(get=get_IsAssigned)) bool  IsAssigned;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Method Equals, addr 0x9e35e88, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9e35f08, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x9e35e60, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9e35e48, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method get_IsAssigned, addr 0x9e35e50, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAssigned() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x9e35e40, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method op_Explicit, addr 0x9e35e6c, size 0x1c, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::CorrelationID op_Explicit___Meta__Voice__Logging__CorrelationID(::StringW  value) ;

/// @brief Method op_Implicit, addr 0x9e35e68, size 0x4, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Meta::Voice::Logging::CorrelationID  correlationId) ;

// Ctor Parameters []
// @brief default ctor
constexpr CorrelationID() ;

// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CorrelationID(::StringW  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::CorrelationID, _Value_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::CorrelationID) == 0x8, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
