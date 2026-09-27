#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializablePerformanceReport_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SerializablePerformanceReport_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SerializablePerformanceReport_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::SerializablePerformanceReport_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::SerializablePerformanceReport_1, "", "SerializablePerformanceReport`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: SerializablePerformanceReport`1<T>
class CORDL_TYPE SerializablePerformanceReport_1 : public ::System::Object {
public:
// Declarations
/// @brief Field reportDate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportDate, put=__cordl_internal_set_reportDate)) ::StringW  reportDate;

/// @brief Field results, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::System::Collections::Generic::List_1<T>*  results;

/// @brief Field version, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

static inline ::GlobalNamespace::SerializablePerformanceReport_1<T>* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_reportDate() const;

constexpr ::StringW& __cordl_internal_get_reportDate() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_results() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_results() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_reportDate(::StringW  value) ;

constexpr void __cordl_internal_set_results(::System::Collections::Generic::List_1<T>*  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializablePerformanceReport_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializablePerformanceReport_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializablePerformanceReport_1(SerializablePerformanceReport_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializablePerformanceReport_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializablePerformanceReport_1(SerializablePerformanceReport_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{975};

/// @brief Field reportDate, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___reportDate;

/// @brief Field version, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___version;

/// @brief Field results, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
