#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace GlobalNamespace {
struct TextAsset_CreateOptions;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Forward declare root types
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextAsset*);
MARK_REF_T(::UnityEngine::TextAsset_EncodingUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextAsset_EncodingUtility*, "UnityEngine", "TextAsset/EncodingUtility");
// [NativeHeader("Runtime/Scripting/TextAsset.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset
class CORDL_TYPE TextAsset : public ::UnityEngine::Object {
public:
// Declarations
using CreateOptions = ::GlobalNamespace::TextAsset_CreateOptions;

using EncodingUtility = ::UnityEngine::TextAsset_EncodingUtility;

 __declspec(property(get=get_bytes)) ::ArrayW<uint8_t>  bytes;

 __declspec(property(get=get_text)) ::StringW  text;

/// @brief Method DecodeString, addr 0xb5e6204, size 0x27c, virtual false, abstract: false, final false
static inline ::StringW DecodeString(::ArrayW<uint8_t>  bytes) ;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetData() ;

/// @brief Method GetDataPtr, addr 0xb5e6060, size 0x78, virtual false, abstract: false, final false
inline ::System::IntPtr GetDataPtr() ;

/// @brief Method GetDataPtr_Injected, addr 0xb5e60d8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDataPtr_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetDataSize, addr 0xb5e6114, size 0x78, virtual false, abstract: false, final false
inline int64_t GetDataSize() ;

/// @brief Method GetDataSize_Injected, addr 0xb5e618c, size 0x3c, virtual false, abstract: false, final false
static inline int64_t GetDataSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_CreateInstance, addr 0xb5e5eac, size 0x170, virtual false, abstract: false, final false
static inline void Internal_CreateInstance(/* [Writable] */ ::UnityEngine::TextAsset*  self, ::StringW  text) ;

/// @brief Method Internal_CreateInstance_Injected, addr 0xb5e601c, size 0x44, virtual false, abstract: false, final false
static inline void Internal_CreateInstance_Injected(/* [Writable] */ ::UnityEngine::TextAsset*  self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  text) ;

static inline ::UnityEngine::TextAsset* New_ctor() ;

static inline ::UnityEngine::TextAsset* New_ctor(::GlobalNamespace::TextAsset_CreateOptions  options, ::StringW  text) ;

/// @brief Method ToString, addr 0xb5e6480, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb5e6484, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb5e6490, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::TextAsset_CreateOptions  options, ::StringW  text) ;

/// @brief Method get_bytes, addr 0xb5e5df8, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_bytes() ;

/// @brief Method get_bytes_Injected, addr 0xb5e5e70, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> get_bytes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_text, addr 0xb5e61c8, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAsset(TextAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAsset(TextAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextAsset) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset/EncodingUtility
class CORDL_TYPE TextAsset_EncodingUtility : public ::System::Object {
public:
// Declarations
/// @brief Field encodingLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_encodingLookup, put=setStaticF_encodingLookup)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>  encodingLookup;

/// @brief Field targetEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetEncoding, put=setStaticF_targetEncoding)) ::System::Text::Encoding*  targetEncoding;

static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>> getStaticF_encodingLookup() ;

static inline ::System::Text::Encoding* getStaticF_targetEncoding() ;

static inline void setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,::System::Text::Encoding*>>  value) ;

static inline void setStaticF_targetEncoding(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextAsset_EncodingUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAsset_EncodingUtility(TextAsset_EncodingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAsset_EncodingUtility(TextAsset_EncodingUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextAsset_EncodingUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
