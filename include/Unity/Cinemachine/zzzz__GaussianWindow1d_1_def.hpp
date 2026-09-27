#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1d_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GaussianWindow1d_1)
// Forward declare root types
namespace Unity::Cinemachine {
template<typename T>
class GaussianWindow1d_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Cinemachine::GaussianWindow1d_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Cinemachine::GaussianWindow1d_1, "Unity.Cinemachine", "GaussianWindow1d`1");
// Dependencies System.Object
namespace Unity::Cinemachine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Cinemachine.GaussianWindow1d`1<T>
class CORDL_TYPE GaussianWindow1d_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BufferLength)) int32_t  BufferLength;

 __declspec(property(get=get_KernelSize)) int32_t  KernelSize;

 __declspec(property(get=get_Sigma, put=set_Sigma)) float_t  Sigma;

/// @brief Field <Sigma>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Sigma_k__BackingField, put=__cordl_internal_set__Sigma_k__BackingField)) float_t  _Sigma_k__BackingField;

/// @brief Field m_CurrentPos, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentPos, put=__cordl_internal_set_m_CurrentPos)) int32_t  m_CurrentPos;

/// @brief Field m_Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::ArrayW<T>  m_Data;

/// @brief Field m_Kernel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Kernel, put=__cordl_internal_set_m_Kernel)) ::ArrayW<float_t>  m_Kernel;

/// @brief Method AddValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddValue(T  v) ;

/// @brief Method Compute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Compute(int32_t  windowPos) ;

/// @brief Method Filter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Filter(T  v) ;

/// @brief Method GenerateKernel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GenerateKernel(float_t  sigma, int32_t  maxKernelRadius) ;

/// @brief Method GetBufferValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetBufferValue(int32_t  index) ;

/// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsEmpty() ;

static inline ::Unity::Cinemachine::GaussianWindow1d_1<T>* New_ctor(float_t  sigma, int32_t  maxKernelRadius) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetBufferValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetBufferValue(int32_t  index, T  value) ;

/// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Value() ;

constexpr float_t const& __cordl_internal_get__Sigma_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Sigma_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentPos() const;

constexpr int32_t& __cordl_internal_get_m_CurrentPos() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_Data() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_Data() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_Kernel() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_Kernel() ;

constexpr void __cordl_internal_set__Sigma_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentPos(int32_t  value) ;

constexpr void __cordl_internal_set_m_Data(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_m_Kernel(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(float_t  sigma, int32_t  maxKernelRadius) ;

/// @brief Method get_BufferLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_BufferLength() ;

/// @brief Method get_KernelSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_KernelSize() ;

/// [CompilerGenerated]
/// @brief Method get_Sigma, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Sigma() ;

/// [CompilerGenerated]
/// @brief Method set_Sigma, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Sigma(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GaussianWindow1d_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GaussianWindow1d_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GaussianWindow1d_1(GaussianWindow1d_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GaussianWindow1d_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GaussianWindow1d_1(GaussianWindow1d_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22316};

/// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___m_Data;

/// @brief Field m_Kernel, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_Kernel;

/// @brief Field m_CurrentPos, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_CurrentPos;

/// [CompilerGenerated]
/// @brief Field <Sigma>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____Sigma_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
