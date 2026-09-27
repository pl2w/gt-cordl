#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownTextDate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownTextDate)
// Forward declare root types
namespace GameObjectScheduling {
class CountdownTextDate;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::CountdownTextDate*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::CountdownTextDate*, "GameObjectScheduling", "CountdownTextDate");
// [CreateAssetMenu(fileName = "New CountdownText Date", menuName = "Game Object Scheduling/CountdownText Date", order = 1)]
// Dependencies UnityEngine.ScriptableObject
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.CountdownTextDate
class CORDL_TYPE CountdownTextDate : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field CountdownTo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CountdownTo, put=__cordl_internal_set_CountdownTo)) ::StringW  CountdownTo;

/// @brief Field DaysThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_DaysThreshold, put=__cordl_internal_set_DaysThreshold)) int32_t  DaysThreshold;

/// @brief Field DefaultString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultString, put=__cordl_internal_set_DefaultString)) ::StringW  DefaultString;

/// @brief Field FormatString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FormatString, put=__cordl_internal_set_FormatString)) ::StringW  FormatString;

static inline ::GameObjectScheduling::CountdownTextDate* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CountdownTo() const;

constexpr ::StringW& __cordl_internal_get_CountdownTo() ;

constexpr int32_t const& __cordl_internal_get_DaysThreshold() const;

constexpr int32_t& __cordl_internal_get_DaysThreshold() ;

constexpr ::StringW const& __cordl_internal_get_DefaultString() const;

constexpr ::StringW& __cordl_internal_get_DefaultString() ;

constexpr ::StringW const& __cordl_internal_get_FormatString() const;

constexpr ::StringW& __cordl_internal_get_FormatString() ;

constexpr void __cordl_internal_set_CountdownTo(::StringW  value) ;

constexpr void __cordl_internal_set_DaysThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_DefaultString(::StringW  value) ;

constexpr void __cordl_internal_set_FormatString(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ddf5c0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownTextDate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownTextDate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownTextDate(CountdownTextDate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownTextDate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownTextDate(CountdownTextDate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5123};

/// @brief Field CountdownTo, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CountdownTo;

/// @brief Field FormatString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FormatString;

/// @brief Field DefaultString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DefaultString;

/// @brief Field DaysThreshold, offset: 0x30, size: 0x4, def value: None
 int32_t  ___DaysThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::CountdownTextDate, ___CountdownTo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownTextDate, ___FormatString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownTextDate, ___DefaultString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownTextDate, ___DaysThreshold) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::CountdownTextDate) == 0x38, "Size mismatch!");

} // namespace end def GameObjectScheduling
