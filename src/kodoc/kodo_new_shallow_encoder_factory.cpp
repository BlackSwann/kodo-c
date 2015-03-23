// Copyright Steinwurf ApS 2014.
// Distributed under the "STEINWURF RESEARCH LICENSE 1.0".
// See accompanying file LICENSE.rst or
// http://www.steinwurf.com/licensing

#include "kodoc.h"

#include <cstring>
#include <cstdint>
#include <cassert>

#include <kodo/rlnc/full_vector_codes.hpp>
#include <kodo/rlnc/seed_codes.hpp>

#include "encoder_factory_wrapper.hpp"
#include "sparse_encoder_factory_wrapper.hpp"

//------------------------------------------------------------------
// ENCODER FACTORY FOR SHALLOW STORAGE STACKS
//------------------------------------------------------------------

kodo_factory_t
kodo_new_shallow_encoder_factory(int32_t code_type, int32_t finite_field,
                                 uint32_t max_symbols, uint32_t max_symbol_size,
                                 int32_t trace_mode)
{
    using namespace kodo;
    using namespace kodo::rlnc;

    kodo_factory_t factory = 0;

    if (code_type == kodo_full_rlnc)
    {
        if (trace_mode == kodo_trace_disabled)
        {
            if (finite_field == kodo_binary)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary4,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary8,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary16,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
        }
        else
        {
            if (finite_field == kodo_binary)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary4,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary8,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new encoder_factory_wrapper<
                    shallow_full_vector_encoder<fifi::binary16,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
        }
    }
    else if (code_type == kodo_sparse_full_rlnc)
    {
        if (trace_mode == kodo_trace_disabled)
        {
            if (finite_field == kodo_binary)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary4,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary8,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary16,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
        }
        else
        {
            if (finite_field == kodo_binary)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary4,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary8,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new sparse_encoder_factory_wrapper<
                    shallow_sparse_full_vector_encoder<fifi::binary16,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
        }
    }
    else if (code_type == kodo_seed_rlnc)
    {
        if (trace_mode == kodo_trace_disabled)
        {
            if (finite_field == kodo_binary)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary4,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary8,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary16,
                        disable_trace>>(max_symbols, max_symbol_size);
            }
        }
        else
        {
            if (finite_field == kodo_binary)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary4)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary4,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary8)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary8,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
            else if (finite_field == kodo_binary16)
            {
                factory = new encoder_factory_wrapper<
                    shallow_seed_encoder<fifi::binary16,
                        enable_trace>>(max_symbols, max_symbol_size);
            }
        }
    }

    // Unknown code type or field type
    assert(factory);

    return factory;
}