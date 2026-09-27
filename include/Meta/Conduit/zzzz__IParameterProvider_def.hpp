#pragma once
// IWYU pragma private; include "Meta/Conduit/IParameterProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IParameterProvider)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class IParameterProvider;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::IParameterProvider*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::IParameterProvider*, "Meta.Conduit", "IParameterProvider");
// Dependencies 
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.IParameterProvider
class CORDL_TYPE IParameterProvider {
public:
// Declarations
/// @brief Method AddCustomType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddCustomType(::StringW  name, ::System::Type*  type) ;

/// @brief Method AddParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddParameter(::StringW  parameterName, ::System::Object*  value) ;

/// @brief Method ContainsParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ContainsParameter(::System::Reflection::ParameterInfo*  parameter, ::System::Text::StringBuilder*  log) ;

/// @brief Method GetParameterNamesOfType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetParameterNamesOfType(::System::Type*  targetType) ;

/// @brief Method GetParameterValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed) ;

/// @brief Method PopulateParametersFromNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PopulateParametersFromNode(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method PopulateRoles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PopulateRoles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterToRoleMap) ;

/// @brief Method SetSpecializedParameter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetSpecializedParameter(::StringW  reservedParameterName, ::System::Type*  parameterType) ;

// Ctor Parameters [CppParam { name: "", ty: "IParameterProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IParameterProvider(IParameterProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Conduit
