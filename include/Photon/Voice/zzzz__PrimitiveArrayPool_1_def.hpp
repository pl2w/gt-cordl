#pragma once
// IWYU pragma private; include "Photon/Voice/PrimitiveArrayPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__ObjectPool_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveArrayPool_1)
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class PrimitiveArrayPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::PrimitiveArrayPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::PrimitiveArrayPool_1, "Photon.Voice", "PrimitiveArrayPool`1");
// Dependencies Photon.Voice.ObjectPool`2<TType, TInfo>
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.PrimitiveArrayPool`1<T>
class CORDL_TYPE PrimitiveArrayPool_1 : public ::Photon::Voice::ObjectPool_2<::ArrayW<T>,int32_t> {
public:
// Declarations
static inline ::Photon::Voice::PrimitiveArrayPool_1<T>* New_ctor(int32_t  capacity, ::StringW  name) ;

static inline ::Photon::Voice::PrimitiveArrayPool_1<T>* New_ctor(int32_t  capacity, ::StringW  name, int32_t  info) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::StringW  name) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::StringW  name, int32_t  info) ;

/// @brief Method createObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<T> createObject(int32_t  info) ;

/// @brief Method destroyObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void destroyObject(::ArrayW<T>  obj) ;

/// @brief Method infosMatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool infosMatch(int32_t  i0, int32_t  i1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveArrayPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveArrayPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveArrayPool_1(PrimitiveArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveArrayPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveArrayPool_1(PrimitiveArrayPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
