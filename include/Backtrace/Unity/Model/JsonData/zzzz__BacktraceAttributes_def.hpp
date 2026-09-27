#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/BacktraceAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceAttributes)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::JsonData {
class BacktraceAttributes;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::BacktraceAttributes*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::BacktraceAttributes*, "Backtrace.Unity.Model.JsonData", "BacktraceAttributes");
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.BacktraceAttributes
class CORDL_TYPE BacktraceAttributes : public ::System::Object {
public:
// Declarations
/// @brief Field Attributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Attributes;

static inline ::Backtrace::Unity::Model::JsonData::BacktraceAttributes* New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes) ;

/// @brief Method ToJson, addr 0x5f1a960, size 0x5c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Attributes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Attributes() ;

constexpr void __cordl_internal_set_Attributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5f1a754, size 0x20c, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceAttributes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceAttributes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceAttributes(BacktraceAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceAttributes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceAttributes(BacktraceAttributes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27626};

/// @brief Field Attributes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Attributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::BacktraceAttributes, ___Attributes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::BacktraceAttributes) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
