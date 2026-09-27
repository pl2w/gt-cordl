#pragma once
// IWYU pragma private; include "System/Configuration/Internal/IConfigErrorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IConfigErrorInfo)
// Forward declare root types
namespace System::Configuration::Internal {
class IConfigErrorInfo;
}
// Write type traits
MARK_REF_T(::System::Configuration::Internal::IConfigErrorInfo*);
DEFINE_IL2CPP_CLASS(::System::Configuration::Internal::IConfigErrorInfo*, "System.Configuration.Internal", "IConfigErrorInfo");
// Dependencies 
namespace System::Configuration::Internal {
// Is value type: false
// CS Name: System.Configuration.Internal.IConfigErrorInfo
class CORDL_TYPE IConfigErrorInfo {
public:
// Declarations
 __declspec(property(get=get_Filename)) ::StringW  Filename;

 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

/// @brief Method get_Filename, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Filename() ;

/// @brief Method get_LineNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_LineNumber() ;

// Ctor Parameters [CppParam { name: "", ty: "IConfigErrorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConfigErrorInfo(IConfigErrorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration::Internal
