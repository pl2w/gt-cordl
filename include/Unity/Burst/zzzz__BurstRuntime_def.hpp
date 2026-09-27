#pragma once
// IWYU pragma private; include "Unity/Burst/BurstRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstRuntime)
namespace GlobalNamespace {
template<typename T>
struct BurstRuntime_HashCode64_1;
}
namespace Unity::Burst {
class BurstRuntime_PreserveAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class BurstRuntime;
}
namespace Unity::Burst {
class BurstRuntime_PreserveAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstRuntime*);
MARK_REF_T(::Unity::Burst::BurstRuntime_PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstRuntime*, "Unity.Burst", "BurstRuntime");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstRuntime_PreserveAttribute*, "Unity.Burst", "BurstRuntime/PreserveAttribute");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstRuntime
class CORDL_TYPE BurstRuntime : public ::System::Object {
public:
// Declarations
template<typename T>
using HashCode64_1 = ::GlobalNamespace::BurstRuntime_HashCode64_1<T>;

using PreserveAttribute = ::Unity::Burst::BurstRuntime_PreserveAttribute;

/// @brief Method GetHashCode64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int64_t GetHashCode64() ;

/// @brief Method HashStringWithFNV1A64, addr 0xae8129c, size 0x8c, virtual false, abstract: false, final false
static inline int64_t HashStringWithFNV1A64(::StringW  text) ;

/// [BurstRuntime::Preserve]
/// @brief Method Log, addr 0xae81438, size 0x18, virtual false, abstract: false, final false
static inline void Log(uint8_t*  message, int32_t  logType, uint8_t*  fileName, int32_t  lineNumber) ;

/// [BurstRuntime::Preserve]
/// @brief Method PreventRequiredAttributeStrip, addr 0xae81340, size 0xf8, virtual false, abstract: false, final false
static inline void PreventRequiredAttributeStrip() ;

/// [BurstRuntime::Preserve]
/// @brief Method RuntimeLog, addr 0xae81328, size 0x18, virtual false, abstract: false, final false
static inline void RuntimeLog(uint8_t*  message, int32_t  logType, uint8_t*  fileName, int32_t  lineNumber) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstRuntime(BurstRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstRuntime(BurstRuntime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstRuntime) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstRuntime/PreserveAttribute
class CORDL_TYPE BurstRuntime_PreserveAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Unity::Burst::BurstRuntime_PreserveAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xae81450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstRuntime_PreserveAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime_PreserveAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstRuntime_PreserveAttribute(BurstRuntime_PreserveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime_PreserveAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstRuntime_PreserveAttribute(BurstRuntime_PreserveAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstRuntime_PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
