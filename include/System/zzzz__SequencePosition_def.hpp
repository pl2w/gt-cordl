#pragma once
// IWYU pragma private; include "System/SequencePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SequencePosition)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct SequencePosition;
}
// Write type traits
MARK_VAL_T(::System::SequencePosition);
DEFINE_IL2CPP_CLASS(::System::SequencePosition, "System", "SequencePosition");
// [IsReadOnly]
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.SequencePosition
struct CORDL_TYPE SequencePosition {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::System::SequencePosition>"
constexpr operator  ::System::IEquatable_1<::System::SequencePosition>*() ;

/// @brief Method Equals, addr 0xa300078, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa300058, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::System::SequencePosition  other) ;

/// @brief Method GetHashCode, addr 0xa300104, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInteger, addr 0xa300050, size 0x8, virtual false, abstract: false, final false
inline int32_t GetInteger() ;

/// @brief Method GetObject, addr 0xa300048, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* GetObject() ;

/// @brief Method .ctor, addr 0xa300020, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, int32_t  integer) ;

/// @brief Convert to "::System::IEquatable_1<::System::SequencePosition>"
constexpr ::System::IEquatable_1<::System::SequencePosition>* i___System__IEquatable_1___System__SequencePosition_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SequencePosition() ;

// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_integer", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SequencePosition(::System::Object*  _object, int32_t  _integer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _object, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _object;

/// @brief Field _integer, offset: 0x8, size: 0x4, def value: None
 int32_t  _integer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::SequencePosition, _object) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::SequencePosition, _integer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::SequencePosition) == 0x10, "Size mismatch!");

} // namespace end def System
