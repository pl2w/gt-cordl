#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JConstructor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JConstructor)
namespace GlobalNamespace {
struct JConstructor__LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JConstructor*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JConstructor*, "Newtonsoft.Json.Linq", "JConstructor");
// [NullableContext(1)]
// [Nullable(0)]
// [DefaultMember("Item")]
// Dependencies Newtonsoft.Json.Linq.JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JConstructor
class CORDL_TYPE JConstructor : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using _LoadAsync_d__2 = ::GlobalNamespace::JConstructor__LoadAsync_d__2;

 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

/// @brief [Nullable(2)]
 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

/// @brief [Nullable(2)]
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

/// @brief Field _name, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _values, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  _values;

/// @brief Method CloneToken, addr 0xa3d0708, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// [NullableContext(2)]
/// @brief Method IndexOfItem, addr 0xa3d04ac, size 0x64, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Load, addr 0xa3d0a88, size 0x1e4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.Linq.JConstructor::<LoadAsync>d__2))]
/// @brief Method LoadAsync, addr 0xa3d0368, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JConstructor*>* LoadAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW  name) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method WriteTo, addr 0xa3d0770, size 0xe0, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method .ctor, addr 0xa3d05d4, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0xa3d0520, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JConstructor*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0xa3d04a4, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Item, addr 0xa3d0850, size 0x118, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object*  key) ;

/// [NullableContext(2)]
/// @brief Method get_Name, addr 0xa3d0510, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Type, addr 0xa3d0518, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method set_Item, addr 0xa3d0968, size 0x120, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  key, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JConstructor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JConstructor(JConstructor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JConstructor(JConstructor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23320};

/// [Nullable(2)]
/// @brief Field _name, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _values, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____name) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____values) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JConstructor) == 0x68, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
