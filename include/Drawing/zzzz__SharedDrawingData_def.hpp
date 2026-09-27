#pragma once
// IWYU pragma private; include "Drawing/SharedDrawingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SharedDrawingData)
namespace Drawing {
class SharedDrawingData_BurstTimeKey;
}
// Forward declare root types
namespace Drawing {
class SharedDrawingData;
}
namespace Drawing {
class SharedDrawingData_BurstTimeKey;
}
// Write type traits
MARK_REF_T(::Drawing::SharedDrawingData*);
MARK_REF_T(::Drawing::SharedDrawingData_BurstTimeKey*);
DEFINE_IL2CPP_CLASS(::Drawing::SharedDrawingData*, "Drawing", "SharedDrawingData");
DEFINE_IL2CPP_CLASS(::Drawing::SharedDrawingData_BurstTimeKey*, "Drawing", "SharedDrawingData/BurstTimeKey");
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>
namespace Drawing {
// Is value type: false
// CS Name: Drawing.SharedDrawingData
class CORDL_TYPE SharedDrawingData : public ::System::Object {
public:
// Declarations
using BurstTimeKey = ::Drawing::SharedDrawingData_BurstTimeKey;

/// @brief Field BurstTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BurstTime, put=setStaticF_BurstTime)) ::Unity::Burst::SharedStatic_1<float_t>  BurstTime;

static inline ::Unity::Burst::SharedStatic_1<float_t> getStaticF_BurstTime() ;

static inline void setStaticF_BurstTime(::Unity::Burst::SharedStatic_1<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedDrawingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedDrawingData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedDrawingData(SharedDrawingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedDrawingData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedDrawingData(SharedDrawingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27725};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::SharedDrawingData) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.SharedDrawingData/BurstTimeKey
class CORDL_TYPE SharedDrawingData_BurstTimeKey : public ::System::Object {
public:
// Declarations
static inline ::Drawing::SharedDrawingData_BurstTimeKey* New_ctor() ;

/// @brief Method .ctor, addr 0x55cb37c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedDrawingData_BurstTimeKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedDrawingData_BurstTimeKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedDrawingData_BurstTimeKey(SharedDrawingData_BurstTimeKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedDrawingData_BurstTimeKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedDrawingData_BurstTimeKey(SharedDrawingData_BurstTimeKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::SharedDrawingData_BurstTimeKey) == 0x10, "Size mismatch!");

} // namespace end def Drawing
