#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(Utf8Constants)
// Forward declare root types
namespace System::Buffers::Text {
class Utf8Constants;
}
// Write type traits
MARK_REF_T(::System::Buffers::Text::Utf8Constants*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::Utf8Constants*, "System.Buffers.Text", "Utf8Constants");
// Dependencies System.Object, System.TimeSpan
namespace System::Buffers::Text {
// Is value type: false
// CS Name: System.Buffers.Text.Utf8Constants
class CORDL_TYPE Utf8Constants : public ::System::Object {
public:
// Declarations
/// @brief Field s_nullUtcOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_nullUtcOffset, put=setStaticF_s_nullUtcOffset)) ::System::TimeSpan  s_nullUtcOffset;

static inline ::System::TimeSpan getStaticF_s_nullUtcOffset() ;

static inline void setStaticF_s_nullUtcOffset(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8Constants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8Constants(Utf8Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8Constants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8Constants(Utf8Constants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Text::Utf8Constants) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Text
