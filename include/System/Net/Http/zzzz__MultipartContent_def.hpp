#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartContent)
namespace GlobalNamespace {
struct MultipartContent__SerializeToStreamAsync_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net {
class TransportContext;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net::Http {
class MultipartContent;
}
// Write type traits
MARK_REF_T(::System::Net::Http::MultipartContent*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::MultipartContent*, "System.Net.Http", "MultipartContent");
// Dependencies System.Net.Http.HttpContent
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MultipartContent
class CORDL_TYPE MultipartContent : public ::System::Net::Http::HttpContent {
public:
// Declarations
using _SerializeToStreamAsync_d__8 = ::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8;

/// @brief Field boundary, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundary, put=__cordl_internal_set_boundary)) ::StringW  boundary;

/// @brief Field nested_content, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nested_content, put=__cordl_internal_set_nested_content)) ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*  nested_content;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xa9e3190, size 0x14c, virtual true, abstract: false, final false
inline void Add(::System::Net::Http::HttpContent*  content) ;

/// @brief Method Dispose, addr 0xa9e32dc, size 0x184, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetEnumerator, addr 0xa9e3b68, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* GetEnumerator() ;

/// @brief Method IsValidRFC2049, addr 0xa9e2ff4, size 0xd0, virtual false, abstract: false, final false
static inline bool IsValidRFC2049(::StringW  s) ;

static inline ::System::Net::Http::MultipartContent* New_ctor(::StringW  subtype) ;

static inline ::System::Net::Http::MultipartContent* New_ctor(::StringW  subtype, ::StringW  boundary) ;

/// [AsyncStateMachine(typeof(System.Net.Http.MultipartContent::<SerializeToStreamAsync>d__8))]
/// @brief Method SerializeToStreamAsync, addr 0xa9e3460, size 0x118, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa9e3bf8, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryComputeLength, addr 0xa9e3578, size 0x5f0, virtual true, abstract: false, final false
inline bool TryComputeLength(::by_ref<int64_t>  length) ;

constexpr ::StringW const& __cordl_internal_get_boundary() const;

constexpr ::StringW& __cordl_internal_get_boundary() ;

constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* const& __cordl_internal_get_nested_content() const;

constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*& __cordl_internal_get_nested_content() ;

constexpr void __cordl_internal_set_boundary(::StringW  value) ;

constexpr void __cordl_internal_set_nested_content(::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*  value) ;

/// @brief Method .ctor, addr 0xa9e2c30, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::StringW  subtype) ;

/// @brief Method .ctor, addr 0xa9e2ce8, size 0x30c, virtual false, abstract: false, final false
inline void _ctor(::StringW  subtype, ::StringW  boundary) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>* i___System__Collections__Generic__IEnumerable_1___System__Net__Http__HttpContent__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultipartContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultipartContent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipartContent(MultipartContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipartContent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipartContent(MultipartContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30730};

/// @brief Field nested_content, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*  ___nested_content;

/// @brief Field boundary, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___boundary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::MultipartContent, ___nested_content) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent, ___boundary) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::MultipartContent) == 0x40, "Size mismatch!");

} // namespace end def System::Net::Http
