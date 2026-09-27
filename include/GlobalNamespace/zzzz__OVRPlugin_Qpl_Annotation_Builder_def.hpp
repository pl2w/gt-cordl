#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Annotation_Builder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_Annotation_Builder)
namespace GlobalNamespace {
struct Builder_Annotation_Qpl_OVRPlugin_Entry;
}
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Annotation;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Variant;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Annotation_Qpl_OVRPlugin_Builder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder, "", "OVRPlugin/Qpl/Annotation/Builder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/Annotation/Builder
struct CORDL_TYPE Annotation_Qpl_OVRPlugin_Builder {
public:
// Declarations
using Entry = ::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0xa6144ec, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, ::GlobalNamespace::OVRPlugin_Bool*  value, int32_t  count) ;

/// @brief Method Add, addr 0xa614330, size 0x114, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  value) ;

/// @brief Method Add, addr 0xa614444, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, ::StringW  value) ;

/// @brief Method Add, addr 0xa6144a4, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, bool  value) ;

/// @brief Method Add, addr 0xa614498, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, double_t  value) ;

/// @brief Method Add, addr 0xa6144d8, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, double_t*  value, int32_t  count) ;

/// @brief Method Add, addr 0xa61448c, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, int64_t  value) ;

/// @brief Method Add, addr 0xa6144c4, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, int64_t*  value, int32_t  count) ;

/// @brief Method Add, addr 0xa614480, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, uint8_t*  value) ;

/// @brief Method Add, addr 0xa6144b0, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Add(::StringW  key, uint8_t*  value, int32_t  count) ;

/// @brief Method Copy, addr 0xa61416c, size 0xe4, virtual false, abstract: false, final false
inline ::System::IntPtr Copy(::StringW  str) ;

/// @brief Method Create, addr 0xa61429c, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder Create() ;

/// @brief Method Dispose, addr 0xa614700, size 0x1c0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToNativeArray, addr 0xa614500, size 0x200, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::Qpl_OVRPlugin_Annotation> ToNativeArray(::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_Count, addr 0xa614250, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Annotation_Qpl_OVRPlugin_Builder() ;

// Ctor Parameters [CppParam { name: "_entries", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ownedStrings", ty: "::System::Collections::Generic::List_1<::System::IntPtr>*", modifiers: "", def_value: None, comment: None }]
constexpr Annotation_Qpl_OVRPlugin_Builder(::System::Collections::Generic::List_1<::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry>*  _entries, ::System::Collections::Generic::List_1<::System::IntPtr>*  _ownedStrings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _entries, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry>*  _entries;

/// @brief Field _ownedStrings, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IntPtr>*  _ownedStrings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder, _entries) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder, _ownedStrings) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
