#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/BaseJsonVariableInfo_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseJsonVariableInfo_1)
namespace Meta::WitAi::Json {
class IJsonVariableInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
template<typename T>
class BaseJsonVariableInfo_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Json::BaseJsonVariableInfo_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Json::BaseJsonVariableInfo_1, "Meta.WitAi.Json", "BaseJsonVariableInfo`1");
// Dependencies System.Attribute, System.Object
namespace Meta::WitAi::Json {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Json.BaseJsonVariableInfo`1<T>
class CORDL_TYPE BaseJsonVariableInfo_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _info, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__info, put=__cordl_internal_set__info)) T  _info;

/// @brief Convert operator to "::Meta::WitAi::Json::IJsonVariableInfo"
constexpr operator  ::Meta::WitAi::Json::IJsonVariableInfo*() noexcept;

/// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline ::System::Collections::Generic::IEnumerable_1<TAttribute>* GetCustomAttributes() ;

/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method GetSerializeNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetSerializeNames() ;

/// @brief Method GetShouldDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetShouldDeserialize() ;

/// @brief Method GetShouldSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetShouldSerialize() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetValue(::System::Object*  obj) ;

/// @brief Method GetVariableType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* GetVariableType() ;

/// @brief Method HasGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasGet() ;

/// @brief Method HasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasSet() ;

/// @brief Method IsDefined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline bool IsDefined() ;

/// @brief Method IsGetPublic, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsGetPublic() ;

/// @brief Method IsSetPublic, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSetPublic() ;

static inline ::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>* New_ctor(T  info) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValue(::System::Object*  obj, ::System::Object*  newValue) ;

constexpr T const& __cordl_internal_get__info() const;

constexpr T& __cordl_internal_get__info() ;

constexpr void __cordl_internal_set__info(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  info) ;

/// @brief Convert to "::Meta::WitAi::Json::IJsonVariableInfo"
constexpr ::Meta::WitAi::Json::IJsonVariableInfo* i___Meta__WitAi__Json__IJsonVariableInfo() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseJsonVariableInfo_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseJsonVariableInfo_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseJsonVariableInfo_1(BaseJsonVariableInfo_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseJsonVariableInfo_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseJsonVariableInfo_1(BaseJsonVariableInfo_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31014};

/// @brief Field _info, offset: 0x10, size: 0x8, def value: None
 T  ____info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Json
