#pragma once
// IWYU pragma private; include "Meta/Conduit/ParameterProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ParameterProvider)
namespace Meta::Conduit {
struct ConduitParameterValue;
}
namespace Meta::Conduit {
class IParameterProvider;
}
namespace Meta::Conduit {
class ParameterProvider___c__DisplayClass24_0;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
class ParameterProvider;
}
namespace Meta::Conduit {
class ParameterProvider___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ParameterProvider*);
MARK_REF_T(::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ParameterProvider*, "Meta.Conduit", "ParameterProvider");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ParameterProvider___c__DisplayClass24_0*, "Meta.Conduit", "ParameterProvider/<>c__DisplayClass24_0");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ParameterProvider
class CORDL_TYPE ParameterProvider : public ::System::Object {
public:
// Declarations
using __c__DisplayClass24_0 = ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0;

/// @brief Field ActualParameters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActualParameters, put=__cordl_internal_set_ActualParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ActualParameters;

 __declspec(property(get=get_AllParameterNames)) ::System::Collections::Generic::List_1<::StringW>*  AllParameterNames;

/// @brief Field BuiltInTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BuiltInTypes, put=setStaticF_BuiltInTypes)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*  BuiltInTypes;

/// @brief Field _customTypes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__customTypes, put=__cordl_internal_set__customTypes)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  _customTypes;

/// @brief Field _parameterToRoleMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__parameterToRoleMap, put=__cordl_internal_set__parameterToRoleMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _parameterToRoleMap;

/// @brief Field _parametersOfType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__parametersOfType, put=__cordl_internal_set__parametersOfType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*  _parametersOfType;

/// @brief Field _specializedParameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__specializedParameters, put=__cordl_internal_set__specializedParameters)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  _specializedParameters;

/// @brief Convert operator to "::Meta::Conduit::IParameterProvider"
constexpr operator  ::Meta::Conduit::IParameterProvider*() noexcept;

/// @brief Method AddCustomType, addr 0x9e23a48, size 0x68, virtual true, abstract: false, final true
inline void AddCustomType(::StringW  name, ::System::Type*  type) ;

/// @brief Method AddParameter, addr 0x9e1d684, size 0x68, virtual true, abstract: false, final true
inline void AddParameter(::StringW  parameterName, ::System::Object*  value) ;

/// @brief Method ContainsParameter, addr 0x9e24a98, size 0x180, virtual true, abstract: false, final true
inline bool ContainsParameter(::System::Reflection::ParameterInfo*  parameter, ::System::Text::StringBuilder*  log) ;

/// @brief Method GetActualParameterName, addr 0x9e24d88, size 0x2e4, virtual false, abstract: false, final false
inline ::StringW GetActualParameterName(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed) ;

/// @brief Method GetParameterNamesOfType, addr 0x9e2506c, size 0x578, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::StringW>* GetParameterNamesOfType(::System::Type*  targetType) ;

/// @brief Method GetParameterTypes, addr 0x9e2436c, size 0x358, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetParameterTypes(::StringW  typeString, ::StringW  value) ;

/// @brief Method GetParameterValue, addr 0x9e24c18, size 0x170, virtual true, abstract: false, final true
inline ::System::Object* GetParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed) ;

/// @brief Method GetSpecializedParameter, addr 0x9e25654, size 0x504, virtual true, abstract: false, final false
inline ::System::Object* GetSpecializedParameter(::System::Reflection::ParameterInfo*  formalParameter) ;

static inline ::Meta::Conduit::ParameterProvider* New_ctor() ;

/// @brief Method PerfectTypeMatch, addr 0x9e25b60, size 0x148, virtual false, abstract: false, final false
inline bool PerfectTypeMatch(::System::Type*  targetType, ::StringW  value) ;

/// @brief Method PopulateParameters, addr 0x9e246c4, size 0x194, virtual false, abstract: false, final false
inline void PopulateParameters(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Conduit::ConduitParameterValue>*  actualParameters) ;

/// @brief Method PopulateParametersFromNode, addr 0x9e23ab0, size 0x8bc, virtual true, abstract: false, final true
inline void PopulateParametersFromNode(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method PopulateRoles, addr 0x9e248d4, size 0x1c4, virtual true, abstract: false, final true
inline void PopulateRoles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterToRoleMap) ;

/// @brief Method SetSpecializedParameter, addr 0x9e24858, size 0x7c, virtual true, abstract: false, final true
inline void SetSpecializedParameter(::StringW  reservedParameterName, ::System::Type*  parameterType) ;

/// @brief Method SupportedSpecializedParameter, addr 0x9e255e4, size 0x70, virtual true, abstract: false, final false
inline bool SupportedSpecializedParameter(::System::Reflection::ParameterInfo*  formalParameter) ;

/// @brief Method ToString, addr 0x9e25ca8, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_ActualParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_ActualParameters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* const& __cordl_internal_get__customTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*& __cordl_internal_get__customTypes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__parameterToRoleMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__parameterToRoleMap() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get__parametersOfType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__parametersOfType() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* const& __cordl_internal_get__specializedParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*& __cordl_internal_get__specializedParameters() ;

constexpr void __cordl_internal_set_ActualParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__customTypes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value) ;

constexpr void __cordl_internal_set__parameterToRoleMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__parametersOfType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__specializedParameters(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e1d414, size 0x270, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>* getStaticF_BuiltInTypes() ;

/// @brief Method get_AllParameterNames, addr 0x9e239dc, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::StringW>* get_AllParameterNames() ;

/// @brief Convert to "::Meta::Conduit::IParameterProvider"
constexpr ::Meta::Conduit::IParameterProvider* i___Meta__Conduit__IParameterProvider() noexcept;

static inline void setStaticF_BuiltInTypes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Type*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterProvider(ParameterProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterProvider(ParameterProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25430};

/// @brief Field ActualParameters, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___ActualParameters;

/// @brief Field _parameterToRoleMap, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____parameterToRoleMap;

/// @brief Field _parametersOfType, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*  ____parametersOfType;

/// @brief Field _specializedParameters, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  ____specializedParameters;

/// @brief Field _customTypes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  ____customTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ParameterProvider, ___ActualParameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ParameterProvider, ____parameterToRoleMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ParameterProvider, ____parametersOfType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ParameterProvider, ____specializedParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ParameterProvider, ____customTypes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ParameterProvider) == 0x38, "Size mismatch!");

} // namespace end def Meta::Conduit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ParameterProvider/<>c__DisplayClass24_0
class CORDL_TYPE ParameterProvider___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Conduit::ParameterProvider*  __4__this;

/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

static inline ::Meta::Conduit::ParameterProvider___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <GetParameterTypes>b__0, addr 0x9e273cc, size 0x18, virtual false, abstract: false, final false
inline bool _GetParameterTypes_b__0(::System::Type*  type) ;

constexpr ::Meta::Conduit::ParameterProvider* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Conduit::ParameterProvider*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set___4__this(::Meta::Conduit::ParameterProvider*  value) ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e25b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterProvider___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterProvider___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterProvider___c__DisplayClass24_0(ParameterProvider___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterProvider___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterProvider___c__DisplayClass24_0(ParameterProvider___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25429};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Conduit::ParameterProvider*  _____4__this;

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ParameterProvider___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ParameterProvider___c__DisplayClass24_0, ___value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ParameterProvider___c__DisplayClass24_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Conduit
