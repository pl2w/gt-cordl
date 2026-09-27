#pragma once
// IWYU pragma private; include "Fusion/JsonUtilityExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonUtilityExtensions)
namespace Fusion {
class JsonUtilityExtensions_InstanceIDHandlerDelegate;
}
namespace Fusion {
class JsonUtilityExtensions_TypeNameWrapper;
}
namespace Fusion {
class JsonUtilityExtensions_TypeResolverDelegate;
}
namespace Fusion {
class JsonUtilityExtensions_TypeSerializerDelegate;
}
namespace GlobalNamespace {
struct JsonUtilityExtensions___c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct JsonUtilityExtensions___c__DisplayClass9_0;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class TextWriter;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class JsonUtilityExtensions;
}
namespace Fusion {
class JsonUtilityExtensions_InstanceIDHandlerDelegate;
}
namespace Fusion {
class JsonUtilityExtensions_TypeNameWrapper;
}
namespace Fusion {
class JsonUtilityExtensions_TypeResolverDelegate;
}
namespace Fusion {
class JsonUtilityExtensions_TypeSerializerDelegate;
}
// Write type traits
MARK_REF_T(::Fusion::JsonUtilityExtensions*);
MARK_REF_T(::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*);
MARK_REF_T(::Fusion::JsonUtilityExtensions_TypeNameWrapper*);
MARK_REF_T(::Fusion::JsonUtilityExtensions_TypeResolverDelegate*);
MARK_REF_T(::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*);
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtilityExtensions*, "Fusion", "JsonUtilityExtensions");
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*, "Fusion", "JsonUtilityExtensions/InstanceIDHandlerDelegate");
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtilityExtensions_TypeNameWrapper*, "Fusion", "JsonUtilityExtensions/TypeNameWrapper");
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtilityExtensions_TypeResolverDelegate*, "Fusion", "JsonUtilityExtensions/TypeResolverDelegate");
DEFINE_IL2CPP_CLASS(::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*, "Fusion", "JsonUtilityExtensions/TypeSerializerDelegate");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtilityExtensions
class CORDL_TYPE JsonUtilityExtensions : public ::System::Object {
public:
// Declarations
using InstanceIDHandlerDelegate = ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate;

using TypeNameWrapper = ::Fusion::JsonUtilityExtensions_TypeNameWrapper;

using TypeResolverDelegate = ::Fusion::JsonUtilityExtensions_TypeResolverDelegate;

using TypeSerializerDelegate = ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate;

using __c__DisplayClass8_0 = ::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0;

/// @brief Method EnquoteIntegers, addr 0x60e1b90, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW EnquoteIntegers(::StringW  json, int32_t  minDigits) ;

/// @brief Method FindObjectEnd, addr 0x60e3210, size 0xc, virtual false, abstract: false, final false
static inline int32_t FindObjectEnd(::StringW  json, int32_t  start) ;

/// @brief Method FindScopeEnd, addr 0x60e30d4, size 0x13c, virtual false, abstract: false, final false
static inline int32_t FindScopeEnd(::StringW  json, int32_t  start, char16_t  cstart, char16_t  cend) ;

/// @brief Method FromJsonWithTypeAnnotation, addr 0x60e2518, size 0x28c, virtual false, abstract: false, final false
static inline ::System::Object* FromJsonWithTypeAnnotation(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver) ;

/// @brief Method FromJsonWithTypeAnnotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FromJsonWithTypeAnnotation(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver) ;

/// @brief Method FromJsonWithTypeAnnotationInternal, addr 0x60e2c90, size 0x340, virtual false, abstract: false, final false
static inline ::System::Object* FromJsonWithTypeAnnotationInternal(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver, ::System::Collections::IList*  targetList) ;

/// @brief Method FromJsonWithTypeAnnotationToObject, addr 0x60e28a8, size 0x3e8, virtual false, abstract: false, final false
static inline ::System::Object* FromJsonWithTypeAnnotationToObject(::by_ref<int32_t>  i, ::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver) ;

/// @brief Method ToJsonInternal, addr 0x60e204c, size 0x4cc, virtual false, abstract: false, final false
static inline void ToJsonInternal(::System::Object*  obj, ::System::IO::TextWriter*  writer, ::System::Nullable_1<int32_t>  integerEnquoteMinDigits, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*  typeResolver, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler) ;

/// @brief Method ToJsonWithTypeAnnotation, addr 0x60e1c68, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW ToJsonWithTypeAnnotation(::System::Object*  obj, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler) ;

/// @brief Method ToJsonWithTypeAnnotation, addr 0x60e1e04, size 0x248, virtual false, abstract: false, final false
static inline void ToJsonWithTypeAnnotation(::System::Object*  obj, ::System::IO::TextWriter*  writer, ::System::Nullable_1<int32_t>  integerEnquoteMinDigits, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*  typeSerializer, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler) ;

/// [CompilerGenerated]
/// @brief Method <FromJsonWithTypeAnnotationInternal>g__SkipWhiteOrThrow|9_0, addr 0x60e2fd0, size 0x104, virtual false, abstract: false, final false
static inline int32_t _FromJsonWithTypeAnnotationInternal_g__SkipWhiteOrThrow_9_0(int32_t  i, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <FromJsonWithTypeAnnotation>g__SkipWhiteOrThrow|8_0, addr 0x60e27a4, size 0x104, virtual false, abstract: false, final false
static inline int32_t _FromJsonWithTypeAnnotation_g__SkipWhiteOrThrow_8_0(int32_t  i, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0>  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtilityExtensions(JsonUtilityExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtilityExtensions(JsonUtilityExtensions const& ) = delete;

/// @brief Field TypePropertyName offset 0xffffffff size 0x8
static constexpr ::ConstString  TypePropertyName{u"$type"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::JsonUtilityExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtilityExtensions/TypeNameWrapper
class CORDL_TYPE JsonUtilityExtensions_TypeNameWrapper : public ::System::Object {
public:
// Declarations
/// @brief Field __TypeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___TypeName, put=__cordl_internal_set___TypeName)) ::StringW  __TypeName;

static inline ::Fusion::JsonUtilityExtensions_TypeNameWrapper* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get___TypeName() const;

constexpr ::StringW& __cordl_internal_get___TypeName() ;

constexpr void __cordl_internal_set___TypeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x60e35e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions_TypeNameWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeNameWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtilityExtensions_TypeNameWrapper(JsonUtilityExtensions_TypeNameWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeNameWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtilityExtensions_TypeNameWrapper(JsonUtilityExtensions_TypeNameWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23430};

/// @brief Field __TypeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  _____TypeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::JsonUtilityExtensions_TypeNameWrapper, _____TypeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::JsonUtilityExtensions_TypeNameWrapper) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtilityExtensions/InstanceIDHandlerDelegate
class CORDL_TYPE JsonUtilityExtensions_InstanceIDHandlerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x60e3574, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  context, int32_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x60e35d4, size 0xc, virtual true, abstract: false, final false
inline ::StringW EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x60e3560, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::System::Object*  context, int32_t  value) ;

static inline ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x60e3454, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions_InstanceIDHandlerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_InstanceIDHandlerDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtilityExtensions_InstanceIDHandlerDelegate(JsonUtilityExtensions_InstanceIDHandlerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_InstanceIDHandlerDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtilityExtensions_InstanceIDHandlerDelegate(JsonUtilityExtensions_InstanceIDHandlerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtilityExtensions/TypeSerializerDelegate
class CORDL_TYPE JsonUtilityExtensions_TypeSerializerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x60e3428, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Type*  type, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x60e3448, size 0xc, virtual true, abstract: false, final false
inline ::StringW EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x60e3414, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::System::Type*  type) ;

static inline ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x60e330c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions_TypeSerializerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeSerializerDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtilityExtensions_TypeSerializerDelegate(JsonUtilityExtensions_TypeSerializerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeSerializerDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtilityExtensions_TypeSerializerDelegate(JsonUtilityExtensions_TypeSerializerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::JsonUtilityExtensions_TypeSerializerDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.JsonUtilityExtensions/TypeResolverDelegate
class CORDL_TYPE JsonUtilityExtensions_TypeResolverDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x60e32e0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  typeName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x60e3300, size 0xc, virtual true, abstract: false, final false
inline ::System::Type* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x60e32cc, size 0x14, virtual true, abstract: false, final false
inline ::System::Type* Invoke(::StringW  typeName) ;

static inline ::Fusion::JsonUtilityExtensions_TypeResolverDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x60e321c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions_TypeResolverDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeResolverDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtilityExtensions_TypeResolverDelegate(JsonUtilityExtensions_TypeResolverDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtilityExtensions_TypeResolverDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtilityExtensions_TypeResolverDelegate(JsonUtilityExtensions_TypeResolverDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::JsonUtilityExtensions_TypeResolverDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
