#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__HebrewNumber_HS_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber)
namespace GlobalNamespace {
struct HebrewNumber_HS;
}
namespace GlobalNamespace {
struct HebrewNumber_HebrewToken;
}
namespace GlobalNamespace {
struct HebrewNumber_HebrewValue;
}
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
namespace System::Globalization {
struct HebrewNumberParsingState;
}
// Forward declare root types
namespace System::Globalization {
class HebrewNumber;
}
// Write type traits
MARK_REF_T(::System::Globalization::HebrewNumber*);
DEFINE_IL2CPP_CLASS(::System::Globalization::HebrewNumber*, "System.Globalization", "HebrewNumber");
// Dependencies System.Globalization.HebrewNumber::HS, System.Globalization.HebrewNumber::HebrewValue, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.HebrewNumber
class CORDL_TYPE HebrewNumber : public ::System::Object {
public:
// Declarations
using HS = ::GlobalNamespace::HebrewNumber_HS;

using HebrewToken = ::GlobalNamespace::HebrewNumber_HebrewToken;

using HebrewValue = ::GlobalNamespace::HebrewNumber_HebrewValue;

/// @brief Field s_hebrewValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_hebrewValues, put=setStaticF_s_hebrewValues)) ::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>  s_hebrewValues;

/// @brief Field s_maxHebrewNumberCh, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_s_maxHebrewNumberCh, put=setStaticF_s_maxHebrewNumberCh)) char16_t  s_maxHebrewNumberCh;

/// @brief Field s_numberPasingState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_numberPasingState, put=setStaticF_s_numberPasingState)) ::ArrayW<::GlobalNamespace::HebrewNumber_HS>  s_numberPasingState;

/// @brief Method IsDigit, addr 0xa235f38, size 0xcc, virtual false, abstract: false, final false
static inline bool IsDigit(char16_t  ch) ;

/// @brief Method ParseByChar, addr 0xa235da0, size 0x198, virtual false, abstract: false, final false
static inline ::System::Globalization::HebrewNumberParsingState ParseByChar(char16_t  ch, ::by_ref<::System::Globalization::HebrewNumberParsingContext>  context) ;

/// @brief Method ToString, addr 0xa235af4, size 0x2ac, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  Number) ;

static inline ::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue> getStaticF_s_hebrewValues() ;

static inline char16_t getStaticF_s_maxHebrewNumberCh() ;

static inline ::ArrayW<::GlobalNamespace::HebrewNumber_HS> getStaticF_s_numberPasingState() ;

static inline void setStaticF_s_hebrewValues(::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>  value) ;

static inline void setStaticF_s_maxHebrewNumberCh(char16_t  value) ;

static inline void setStaticF_s_numberPasingState(::ArrayW<::GlobalNamespace::HebrewNumber_HS>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HebrewNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HebrewNumber(HebrewNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HebrewNumber(HebrewNumber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::HebrewNumber) == 0x10, "Size mismatch!");

} // namespace end def System::Globalization
