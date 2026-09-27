#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/HandleCollector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandleCollector)
// Forward declare root types
namespace System::Runtime::InteropServices {
class HandleCollector;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::HandleCollector*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::HandleCollector*, "System.Runtime.InteropServices", "HandleCollector");
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.HandleCollector
class CORDL_TYPE HandleCollector : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_InitialThreshold)) int32_t  InitialThreshold;

 __declspec(property(get=get_MaximumThreshold)) int32_t  MaximumThreshold;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field gc_counts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gc_counts, put=__cordl_internal_set_gc_counts)) ::ArrayW<int32_t>  gc_counts;

/// @brief Field gc_gen, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_gc_gen, put=__cordl_internal_set_gc_gen)) int32_t  gc_gen;

/// @brief Field handleCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_handleCount, put=__cordl_internal_set_handleCount)) int32_t  handleCount;

/// @brief Field initialThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialThreshold, put=__cordl_internal_set_initialThreshold)) int32_t  initialThreshold;

/// @brief Field maximumThreshold, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumThreshold, put=__cordl_internal_set_maximumThreshold)) int32_t  maximumThreshold;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field threshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) int32_t  threshold;

/// @brief Method Add, addr 0xad07f3c, size 0x270, virtual false, abstract: false, final false
inline void Add() ;

static inline ::System::Runtime::InteropServices::HandleCollector* New_ctor(::StringW  name, int32_t  initialThreshold) ;

static inline ::System::Runtime::InteropServices::HandleCollector* New_ctor(::StringW  name, int32_t  initialThreshold, int32_t  maximumThreshold) ;

/// @brief Method Remove, addr 0xad081ac, size 0x204, virtual false, abstract: false, final false
inline void Remove() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_gc_counts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_gc_counts() ;

constexpr int32_t const& __cordl_internal_get_gc_gen() const;

constexpr int32_t& __cordl_internal_get_gc_gen() ;

constexpr int32_t const& __cordl_internal_get_handleCount() const;

constexpr int32_t& __cordl_internal_get_handleCount() ;

constexpr int32_t const& __cordl_internal_get_initialThreshold() const;

constexpr int32_t& __cordl_internal_get_initialThreshold() ;

constexpr int32_t const& __cordl_internal_get_maximumThreshold() const;

constexpr int32_t& __cordl_internal_get_maximumThreshold() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_threshold() const;

constexpr int32_t& __cordl_internal_get_threshold() ;

constexpr void __cordl_internal_set_gc_counts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_gc_gen(int32_t  value) ;

constexpr void __cordl_internal_set_handleCount(int32_t  value) ;

constexpr void __cordl_internal_set_initialThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_maximumThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_threshold(int32_t  value) ;

/// @brief Method .ctor, addr 0xad07d6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  initialThreshold) ;

/// @brief Method .ctor, addr 0xad07d74, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  initialThreshold, int32_t  maximumThreshold) ;

/// @brief Method get_Count, addr 0xad07f1c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_InitialThreshold, addr 0xad07f24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InitialThreshold() ;

/// @brief Method get_MaximumThreshold, addr 0xad07f2c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaximumThreshold() ;

/// @brief Method get_Name, addr 0xad07f34, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandleCollector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandleCollector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandleCollector(HandleCollector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandleCollector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandleCollector(HandleCollector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9958};

/// @brief Field deltaPercent offset 0xffffffff size 0x4
static constexpr int32_t  deltaPercent{static_cast<int32_t>(0xa)};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field initialThreshold, offset: 0x18, size: 0x4, def value: None
 int32_t  ___initialThreshold;

/// @brief Field maximumThreshold, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___maximumThreshold;

/// @brief Field threshold, offset: 0x20, size: 0x4, def value: None
 int32_t  ___threshold;

/// @brief Field handleCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___handleCount;

/// @brief Field gc_counts, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___gc_counts;

/// @brief Field gc_gen, offset: 0x30, size: 0x4, def value: None
 int32_t  ___gc_gen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___initialThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___maximumThreshold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___threshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___handleCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___gc_counts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleCollector, ___gc_gen) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::InteropServices::HandleCollector) == 0x38, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
