#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/InMemory/InMemoryBreadcrumb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InMemoryBreadcrumb)
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs::InMemory {
class InMemoryBreadcrumb;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*, "Backtrace.Unity.Model.Breadcrumbs.InMemory", "InMemoryBreadcrumb");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Breadcrumbs::InMemory {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.InMemory.InMemoryBreadcrumb
class CORDL_TYPE InMemoryBreadcrumb : public ::System::Object {
public:
// Declarations
/// @brief Field Attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  Attributes;

 __declspec(property(get=get_Level, put=set_Level)) ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Level;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_Timestamp, put=set_Timestamp)) double_t  Timestamp;

 __declspec(property(get=get_Type, put=set_Type)) ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  Type;

/// @brief Field level, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_level, put=__cordl_internal_set_level)) ::StringW  level;

/// @brief Field message, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field timestamp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timestamp, put=__cordl_internal_set_timestamp)) ::StringW  timestamp;

/// @brief Field type, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

static inline ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb* New_ctor() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Attributes() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_Attributes() ;

constexpr ::StringW const& __cordl_internal_get_level() const;

constexpr ::StringW& __cordl_internal_get_level() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr ::StringW const& __cordl_internal_get_timestamp() const;

constexpr ::StringW& __cordl_internal_get_timestamp() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_level(::StringW  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_timestamp(::StringW  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f20208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Level, addr 0x5f20678, size 0xd8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel get_Level() ;

/// @brief Method get_Message, addr 0x5f20534, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_Timestamp, addr 0x5f20544, size 0x5c, virtual false, abstract: false, final false
inline double_t get_Timestamp() ;

/// @brief Method get_Type, addr 0x5f205a0, size 0xd8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel get_Type() ;

/// @brief Method set_Level, addr 0x5f202ac, size 0xec, virtual false, abstract: false, final false
inline void set_Level(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value) ;

/// @brief Method set_Message, addr 0x5f2053c, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// @brief Method set_Timestamp, addr 0x5f20210, size 0x9c, virtual false, abstract: false, final false
inline void set_Timestamp(double_t  value) ;

/// @brief Method set_Type, addr 0x5f20398, size 0xec, virtual false, abstract: false, final false
inline void set_Type(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InMemoryBreadcrumb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InMemoryBreadcrumb", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InMemoryBreadcrumb(InMemoryBreadcrumb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InMemoryBreadcrumb", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InMemoryBreadcrumb(InMemoryBreadcrumb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27647};

/// @brief Field message, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field timestamp, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___timestamp;

/// @brief Field type, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___type;

/// @brief Field level, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___level;

/// @brief Field Attributes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___Attributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb, ___message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb, ___timestamp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb, ___level) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb, ___Attributes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb) == 0x38, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs::InMemory
