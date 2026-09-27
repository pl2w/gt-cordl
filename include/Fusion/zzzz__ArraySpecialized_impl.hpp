#pragma once
// IWYU pragma private; include "Fusion/ArraySpecialized.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ArraySpecialized_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
//  Writing Method size for method: ::Fusion::ArraySpecialized.FloorLog2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::ArraySpecialized::FloorLog2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f962a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"FloorLog2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Sort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::Sort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f962d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Sort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Fusion::ArraySpecialized::Compare)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f96434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Compare", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.SwapIfGreater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::SwapIfGreater)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f9643c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"SwapIfGreater", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.IntroSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Fusion::ArraySpecialized::IntroSort)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f96320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"IntroSort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.PickPivotAndPartition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::PickPivotAndPartition)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5f96628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"PickPivotAndPartition", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Heapsort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::Heapsort)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f9652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Heapsort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.DownHeap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Fusion::ArraySpecialized::DownHeap)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f967dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"DownHeap", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.InsertionSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::InsertionSort)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f96490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Sort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::Sort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f968ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Sort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::SimulationInput*, ::Fusion::SimulationInput*)>(&::Fusion::ArraySpecialized::Compare)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f96a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.SwapIfGreater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::SwapIfGreater)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f96a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"SwapIfGreater", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.IntroSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t, int32_t)>(&::Fusion::ArraySpecialized::IntroSort)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f968fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"IntroSort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.PickPivotAndPartition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::PickPivotAndPartition)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5f96e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"PickPivotAndPartition", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.Heapsort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::Heapsort)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f96d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Heapsort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.DownHeap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t, int32_t)>(&::Fusion::ArraySpecialized::DownHeap)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5f97120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"DownHeap", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ArraySpecialized.InsertionSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Fusion::SimulationInput*>, int32_t, int32_t)>(&::Fusion::ArraySpecialized::InsertionSort)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5f96bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::ArraySpecialized::FloorLog2(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"FloorLog2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
template<typename T>
inline void Fusion::ArraySpecialized::Swap(::ArrayW<T>  a, int32_t  i, int32_t  j)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                    {"Swap", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, i, j);
}
inline void Fusion::ArraySpecialized::Sort(::ArrayW<int32_t>  array, int32_t  index, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Sort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
inline int32_t Fusion::ArraySpecialized::Compare(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Compare", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void Fusion::ArraySpecialized::SwapIfGreater(::ArrayW<int32_t>  array, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"SwapIfGreater", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, a, b);
}
inline void Fusion::ArraySpecialized::IntroSort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi, int32_t  depthLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"IntroSort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, depthLimit);
}
inline int32_t Fusion::ArraySpecialized::PickPivotAndPartition(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"PickPivotAndPartition", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, lo, hi);
}
inline void Fusion::ArraySpecialized::Heapsort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Heapsort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi);
}
inline void Fusion::ArraySpecialized::DownHeap(::ArrayW<int32_t>  array, int32_t  i, int32_t  n, int32_t  lo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"DownHeap", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, i, n, lo);
}
inline void Fusion::ArraySpecialized::InsertionSort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi);
}
inline void Fusion::ArraySpecialized::Sort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  index, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Sort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, length);
}
inline int32_t Fusion::ArraySpecialized::Compare(::Fusion::SimulationInput*  x, ::Fusion::SimulationInput*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline void Fusion::ArraySpecialized::SwapIfGreater(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"SwapIfGreater", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, a, b);
}
inline void Fusion::ArraySpecialized::IntroSort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi, int32_t  depthLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"IntroSort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi, depthLimit);
}
inline int32_t Fusion::ArraySpecialized::PickPivotAndPartition(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"PickPivotAndPartition", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, lo, hi);
}
inline void Fusion::ArraySpecialized::Heapsort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"Heapsort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi);
}
inline void Fusion::ArraySpecialized::DownHeap(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  i, int32_t  n, int32_t  lo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"DownHeap", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, i, n, lo);
}
inline void Fusion::ArraySpecialized::InsertionSort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ArraySpecialized*>(),
                        {"InsertionSort", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, lo, hi);
}
// Ctor Parameters []
constexpr ::Fusion::ArraySpecialized::ArraySpecialized()   {
}
