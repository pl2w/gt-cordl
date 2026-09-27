#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticInfoAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticInfoAttribute)
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticInfoAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::AnalyticInfoAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::AnalyticInfoAttribute*, "UnityEngine.Analytics", "AnalyticInfoAttribute");
// [AttributeUsage((System.AttributeTargets)12)]
// [ExcludeFromDocs]
// Dependencies System.Attribute
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticInfoAttribute
class CORDL_TYPE AnalyticInfoAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <eventName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventName_k__BackingField, put=__cordl_internal_set__eventName_k__BackingField)) ::StringW  _eventName_k__BackingField;

/// @brief Field <maxEventsPerHour>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxEventsPerHour_k__BackingField, put=__cordl_internal_set__maxEventsPerHour_k__BackingField)) int32_t  _maxEventsPerHour_k__BackingField;

/// @brief Field <maxNumberOfElements>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxNumberOfElements_k__BackingField, put=__cordl_internal_set__maxNumberOfElements_k__BackingField)) int32_t  _maxNumberOfElements_k__BackingField;

/// @brief Field <vendorKey>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__vendorKey_k__BackingField, put=__cordl_internal_set__vendorKey_k__BackingField)) ::StringW  _vendorKey_k__BackingField;

/// @brief Field <version>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__version_k__BackingField, put=__cordl_internal_set__version_k__BackingField)) int32_t  _version_k__BackingField;

static inline ::UnityEngine::Analytics::AnalyticInfoAttribute* New_ctor(::StringW  eventName, ::StringW  vendorKey, int32_t  version, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements) ;

constexpr ::StringW const& __cordl_internal_get__eventName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__eventName_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__maxEventsPerHour_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__maxEventsPerHour_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__maxNumberOfElements_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__maxNumberOfElements_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__vendorKey_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__vendorKey_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__version_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__version_k__BackingField() ;

constexpr void __cordl_internal_set__eventName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__maxEventsPerHour_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__maxNumberOfElements_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__vendorKey_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__version_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xb922f28, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::StringW  eventName, ::StringW  vendorKey, int32_t  version, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticInfoAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticInfoAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticInfoAttribute(AnalyticInfoAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticInfoAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticInfoAttribute(AnalyticInfoAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32613};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <version>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____version_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <vendorKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____vendorKey_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____eventName_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <maxEventsPerHour>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxEventsPerHour_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <maxNumberOfElements>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxNumberOfElements_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::AnalyticInfoAttribute, ____version_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticInfoAttribute, ____vendorKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticInfoAttribute, ____eventName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticInfoAttribute, ____maxEventsPerHour_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::AnalyticInfoAttribute, ____maxNumberOfElements_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Analytics::AnalyticInfoAttribute) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
