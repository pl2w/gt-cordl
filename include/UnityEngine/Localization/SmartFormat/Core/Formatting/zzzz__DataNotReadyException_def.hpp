#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/DataNotReadyException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DataNotReadyException)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class DataNotReadyException;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*, "UnityEngine.Localization.SmartFormat.Core.Formatting", "DataNotReadyException");
// Dependencies System.Exception
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Formatting.DataNotReadyException
class CORDL_TYPE DataNotReadyException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field <Text>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::StringW  _Text_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException* New_ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException* New_ctor(::StringW  text) ;

constexpr ::StringW const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Text_k__BackingField() ;

constexpr void __cordl_internal_set__Text_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb04846c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb0484c4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

/// [CompilerGenerated]
/// @brief Method get_Text, addr 0xb04845c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// [CompilerGenerated]
/// @brief Method set_Text, addr 0xb048464, size 0x8, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataNotReadyException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataNotReadyException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataNotReadyException(DataNotReadyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataNotReadyException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataNotReadyException(DataNotReadyException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25234};

/// [CompilerGenerated]
/// @brief Field <Text>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____Text_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException, ____Text_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Formatting
